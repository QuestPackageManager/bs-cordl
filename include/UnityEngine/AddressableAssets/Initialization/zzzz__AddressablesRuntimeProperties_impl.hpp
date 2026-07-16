#pragma once
// IWYU pragma private; include "UnityEngine/AddressableAssets/Initialization/AddressablesRuntimeProperties.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/AddressableAssets/Initialization/zzzz__AddressablesRuntimeProperties_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__Stack_1_def.hpp"
#include "System/Reflection/zzzz__Assembly_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
//  Writing Method size for method: ::UnityEngine::AddressableAssets::Initialization::AddressablesRuntimeProperties.GetAssemblies
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::System::Reflection::Assembly*> (*)()>(
    &::UnityEngine::AddressableAssets::Initialization::AddressablesRuntimeProperties::GetAssemblies)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x64667f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::Initialization::AddressablesRuntimeProperties*>(), { "GetAssemblies", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::Initialization::AddressablesRuntimeProperties.GetCachedValueCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)()>(&::UnityEngine::AddressableAssets::Initialization::AddressablesRuntimeProperties::GetCachedValueCount)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x646680c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::Initialization::AddressablesRuntimeProperties*>(), { "GetCachedValueCount", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::Initialization::AddressablesRuntimeProperties.SetPropertyValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW, ::StringW)>(&::UnityEngine::AddressableAssets::Initialization::AddressablesRuntimeProperties::SetPropertyValue)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x6466890;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::Initialization::AddressablesRuntimeProperties*>(),
                                                                                           { "SetPropertyValue", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::Initialization::AddressablesRuntimeProperties.ClearCachedPropertyValues
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::UnityEngine::AddressableAssets::Initialization::AddressablesRuntimeProperties::ClearCachedPropertyValues)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6466938;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::Initialization::AddressablesRuntimeProperties*>(), { "ClearCachedPropertyValues", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::Initialization::AddressablesRuntimeProperties.EvaluateProperty
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW)>(&::UnityEngine::AddressableAssets::Initialization::AddressablesRuntimeProperties::EvaluateProperty)> {
  constexpr static std::size_t size = 0x3dc;
  constexpr static std::size_t addrs = 0x64669b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::Initialization::AddressablesRuntimeProperties*>(),
                                                                                           { "EvaluateProperty", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::Initialization::AddressablesRuntimeProperties.EvaluateString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW)>(&::UnityEngine::AddressableAssets::Initialization::AddressablesRuntimeProperties::EvaluateString)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x64526ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::Initialization::AddressablesRuntimeProperties*>(),
                                                                                           { "EvaluateString", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::Initialization::AddressablesRuntimeProperties.EvaluateString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW, char16_t, char16_t, ::System::Func_2<::StringW, ::StringW>*)>(
    &::UnityEngine::AddressableAssets::Initialization::AddressablesRuntimeProperties::EvaluateString)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x6467354;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::AddressableAssets::Initialization::AddressablesRuntimeProperties*>(),
            { "EvaluateString", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<char16_t>(), ::i2c::type_of<char16_t>(), ::i2c::type_of<::System::Func_2<::StringW, ::StringW>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::Initialization::AddressablesRuntimeProperties.EvaluateStringInternal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW, char16_t, char16_t, ::System::Func_2<::StringW, ::StringW>*)>(
    &::UnityEngine::AddressableAssets::Initialization::AddressablesRuntimeProperties::EvaluateStringInternal)> {
  constexpr static std::size_t size = 0x5c0;
  constexpr static std::size_t addrs = 0x6466d94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::AddressableAssets::Initialization::AddressablesRuntimeProperties*>(),
            { "EvaluateStringInternal", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<char16_t>(), ::i2c::type_of<char16_t>(), ::i2c::type_of<::System::Func_2<::StringW, ::StringW>*>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::AddressableAssets::Initialization::AddressablesRuntimeProperties::setStaticF_s_TokenStack(::System::Collections::Generic::Stack_1<::StringW>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::Stack_1<::StringW>*, "s_TokenStack", ::UnityEngine::AddressableAssets::Initialization::AddressablesRuntimeProperties*>(
      std::forward<::System::Collections::Generic::Stack_1<::StringW>*>(value));
}
inline ::System::Collections::Generic::Stack_1<::StringW>* UnityEngine::AddressableAssets::Initialization::AddressablesRuntimeProperties::getStaticF_s_TokenStack() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::Stack_1<::StringW>*, "s_TokenStack", ::UnityEngine::AddressableAssets::Initialization::AddressablesRuntimeProperties*>();
}
inline void UnityEngine::AddressableAssets::Initialization::AddressablesRuntimeProperties::setStaticF_s_TokenStartStack(::System::Collections::Generic::Stack_1<int32_t>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::Stack_1<int32_t>*, "s_TokenStartStack", ::UnityEngine::AddressableAssets::Initialization::AddressablesRuntimeProperties*>(
      std::forward<::System::Collections::Generic::Stack_1<int32_t>*>(value));
}
inline ::System::Collections::Generic::Stack_1<int32_t>* UnityEngine::AddressableAssets::Initialization::AddressablesRuntimeProperties::getStaticF_s_TokenStartStack() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::Stack_1<int32_t>*, "s_TokenStartStack", ::UnityEngine::AddressableAssets::Initialization::AddressablesRuntimeProperties*>();
}
inline void UnityEngine::AddressableAssets::Initialization::AddressablesRuntimeProperties::setStaticF_s_StaticStacksAreInUse(bool value) {
  ::cordl_internals::setStaticField<bool, "s_StaticStacksAreInUse", ::UnityEngine::AddressableAssets::Initialization::AddressablesRuntimeProperties*>(std::forward<bool>(value));
}
inline bool UnityEngine::AddressableAssets::Initialization::AddressablesRuntimeProperties::getStaticF_s_StaticStacksAreInUse() {
  return ::cordl_internals::getStaticField<bool, "s_StaticStacksAreInUse", ::UnityEngine::AddressableAssets::Initialization::AddressablesRuntimeProperties*>();
}
inline void UnityEngine::AddressableAssets::Initialization::AddressablesRuntimeProperties::setStaticF_s_CachedValues(::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*, "s_CachedValues",
                                    ::UnityEngine::AddressableAssets::Initialization::AddressablesRuntimeProperties*>(
      std::forward<::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* UnityEngine::AddressableAssets::Initialization::AddressablesRuntimeProperties::getStaticF_s_CachedValues() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*, "s_CachedValues",
                                           ::UnityEngine::AddressableAssets::Initialization::AddressablesRuntimeProperties*>();
}
inline ::ArrayW<::System::Reflection::Assembly*> UnityEngine::AddressableAssets::Initialization::AddressablesRuntimeProperties::GetAssemblies() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::Initialization::AddressablesRuntimeProperties*>(), { "GetAssemblies", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Reflection::Assembly*>>(nullptr, ___internal_method);
}
inline int32_t UnityEngine::AddressableAssets::Initialization::AddressablesRuntimeProperties::GetCachedValueCount() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::Initialization::AddressablesRuntimeProperties*>(), { "GetCachedValueCount", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method);
}
inline void UnityEngine::AddressableAssets::Initialization::AddressablesRuntimeProperties::SetPropertyValue(::StringW name, ::StringW val) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::Initialization::AddressablesRuntimeProperties*>(),
                                                                                         { "SetPropertyValue", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, name, val);
}
inline void UnityEngine::AddressableAssets::Initialization::AddressablesRuntimeProperties::ClearCachedPropertyValues() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::Initialization::AddressablesRuntimeProperties*>(), { "ClearCachedPropertyValues", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline ::StringW UnityEngine::AddressableAssets::Initialization::AddressablesRuntimeProperties::EvaluateProperty(::StringW name) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::Initialization::AddressablesRuntimeProperties*>(),
                                                                                         { "EvaluateProperty", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, name);
}
inline ::StringW UnityEngine::AddressableAssets::Initialization::AddressablesRuntimeProperties::EvaluateString(::StringW inputString) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::Initialization::AddressablesRuntimeProperties*>(),
                                                                                         { "EvaluateString", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, inputString);
}
inline ::StringW UnityEngine::AddressableAssets::Initialization::AddressablesRuntimeProperties::EvaluateString(::StringW inputString, char16_t startDelimiter, char16_t endDelimiter,
                                                                                                               ::System::Func_2<::StringW, ::StringW>* varFunc) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(
                       ::i2c::class_of<::UnityEngine::AddressableAssets::Initialization::AddressablesRuntimeProperties*>(),
                       { "EvaluateString", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<char16_t>(), ::i2c::type_of<char16_t>(), ::i2c::type_of<::System::Func_2<::StringW, ::StringW>*>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, inputString, startDelimiter, endDelimiter, varFunc);
}
inline ::StringW UnityEngine::AddressableAssets::Initialization::AddressablesRuntimeProperties::EvaluateStringInternal(::StringW inputString, char16_t startDelimiter, char16_t endDelimiter,
                                                                                                                       ::System::Func_2<::StringW, ::StringW>* varFunc) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::AddressableAssets::Initialization::AddressablesRuntimeProperties*>(),
          { "EvaluateStringInternal", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<char16_t>(), ::i2c::type_of<char16_t>(), ::i2c::type_of<::System::Func_2<::StringW, ::StringW>*>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, inputString, startDelimiter, endDelimiter, varFunc);
}
// Ctor Parameters []
constexpr ::UnityEngine::AddressableAssets::Initialization::AddressablesRuntimeProperties::AddressablesRuntimeProperties() {}
