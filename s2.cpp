	HRESULT				hr = S_OK;
	CComPtr <ISpVoice>		cpVoice;
	CComPtr <ISpStream>		cpStream;
	CSpStreamFormat			cAudioFmt;

	//Create a SAPI Voice
	hr = cpVoice.CoCreateInstance( CLSID_SpVoice );

	//Set the audio format
        if(SUCCEEDED(hr))
	{
		hr = cAudioFmt.AssignFormat(SPSF_22kHz16BitMono);
	}

	//Call SPBindToFile, a SAPI helper method,  to bind the audio stream to the file
	if(SUCCEEDED(hr))
	{

		hr = SPBindToFile( L"c:\\ttstemp.wav",  SPFM_CREATE_ALWAYS,
			&cpStream;, & cAudioFmt.FormatId(),cAudioFmt.WaveFormatExPtr() );
	}

	//set the output to cpStream so that the output audio data will be stored in cpStream
        if(SUCCEEDED(hr))
	{
		hr = cpVoice->SetOutput( cpStream, TRUE );
	}

 	//Speak the text "hello world" synchronously
        if(SUCCEEDED(hr))
	{
		hr = cpVoice->Speak( L"Hello World",  SPF_DEFAULT, NULL );
	}

	//close the stream
	if(SUCCEEDED(hr))
	{
		hr = cpStream->Close();
	}

	//Release the stream and voice object
	cpStream.Release ();
	cpVoice.Release();