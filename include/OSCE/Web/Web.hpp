#ifdef __cpp_modules
module;
#endif

#pragma once
#include "OSCE/Web/AsyncRetry.hpp"
#include "OSCE/Web/DefaultRequestSender.hpp"
#include "OSCE/Web/FailedGetRequest.hpp"
#include "OSCE/Web/FailedPostRequest.hpp"
#include "OSCE/Web/IRequestSender.hpp"
#include "OSCE/Web/REST.hpp"
#include "OSCE/Web/WebSettings.hpp"
#ifdef __cpp_modules
export module Web;
#endif
