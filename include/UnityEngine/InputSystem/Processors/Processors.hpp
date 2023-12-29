#ifdef __cpp_modules
module;
#endif

#pragma once
#include "UnityEngine/InputSystem/Processors/AxisDeadzoneProcessor.hpp"
#include "UnityEngine/InputSystem/Processors/ClampProcessor.hpp"
#include "UnityEngine/InputSystem/Processors/CompensateDirectionProcessor.hpp"
#include "UnityEngine/InputSystem/Processors/CompensateRotationProcessor.hpp"
#include "UnityEngine/InputSystem/Processors/InvertProcessor.hpp"
#include "UnityEngine/InputSystem/Processors/InvertVector2Processor.hpp"
#include "UnityEngine/InputSystem/Processors/InvertVector3Processor.hpp"
#include "UnityEngine/InputSystem/Processors/NormalizeProcessor.hpp"
#include "UnityEngine/InputSystem/Processors/NormalizeVector2Processor.hpp"
#include "UnityEngine/InputSystem/Processors/NormalizeVector3Processor.hpp"
#include "UnityEngine/InputSystem/Processors/ScaleProcessor.hpp"
#include "UnityEngine/InputSystem/Processors/ScaleVector2Processor.hpp"
#include "UnityEngine/InputSystem/Processors/ScaleVector3Processor.hpp"
#include "UnityEngine/InputSystem/Processors/StickDeadzoneProcessor.hpp"
#ifdef __cpp_modules
export module Processors;
#endif
