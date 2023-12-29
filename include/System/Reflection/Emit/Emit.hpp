#ifdef __cpp_modules
module;
#endif

#pragma once
#include "System/Reflection/Emit/AssemblyBuilder.hpp"
#include "System/Reflection/Emit/ConstructorBuilder.hpp"
#include "System/Reflection/Emit/DynamicMethod.hpp"
#include "System/Reflection/Emit/EnumBuilder.hpp"
#include "System/Reflection/Emit/EventBuilder.hpp"
#include "System/Reflection/Emit/FieldBuilder.hpp"
#include "System/Reflection/Emit/GenericTypeParameterBuilder.hpp"
#include "System/Reflection/Emit/ILGenerator.hpp"
#include "System/Reflection/Emit/LocalBuilder.hpp"
#include "System/Reflection/Emit/MethodBuilder.hpp"
#include "System/Reflection/Emit/ModuleBuilder.hpp"
#include "System/Reflection/Emit/ParameterBuilder.hpp"
#include "System/Reflection/Emit/PropertyBuilder.hpp"
#include "System/Reflection/Emit/SignatureHelper.hpp"
#include "System/Reflection/Emit/TypeBuilder.hpp"
#include "System/Reflection/Emit/UnmanagedMarshal.hpp"
#ifdef __cpp_modules
export module Emit;
#endif
