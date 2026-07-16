#pragma once
// IWYU pragma private; include "UnityEngine/ProBuilder/PreferenceDictionary.hpp"
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "UnityEngine/ProBuilder/zzzz__PreferenceDictionary_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/ProBuilder/zzzz__IHasDefault_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__ISerializationCallbackReceiver_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
//  Writing Method size for method: ::UnityEngine::ProBuilder::PreferenceDictionary.OnBeforeSerialize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ProBuilder::PreferenceDictionary::*)()>(&::UnityEngine::ProBuilder::PreferenceDictionary::OnBeforeSerialize)> {
  constexpr static std::size_t size = 0x35c;
  constexpr static std::size_t addrs = 0x66cbfdc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::PreferenceDictionary*>(), { "OnBeforeSerialize", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::PreferenceDictionary.OnAfterDeserialize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ProBuilder::PreferenceDictionary::*)()>(&::UnityEngine::ProBuilder::PreferenceDictionary::OnAfterDeserialize)> {
  constexpr static std::size_t size = 0x450;
  constexpr static std::size_t addrs = 0x66cc338;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::PreferenceDictionary*>(), { "OnAfterDeserialize", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::PreferenceDictionary.SetDefaultValues
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ProBuilder::PreferenceDictionary::*)()>(&::UnityEngine::ProBuilder::PreferenceDictionary::SetDefaultValues)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x66cc788;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::PreferenceDictionary*>(), { "SetDefaultValues", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::PreferenceDictionary.HasKey
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::ProBuilder::PreferenceDictionary::*)(::StringW)>(&::UnityEngine::ProBuilder::PreferenceDictionary::HasKey)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x66cc8a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::PreferenceDictionary*>(), { "HasKey", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::PreferenceDictionary.DeleteKey
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ProBuilder::PreferenceDictionary::*)(::StringW)>(&::UnityEngine::ProBuilder::PreferenceDictionary::DeleteKey)> {
  constexpr static std::size_t size = 0x2b8;
  constexpr static std::size_t addrs = 0x66cca54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::PreferenceDictionary*>(), { "DeleteKey", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::PreferenceDictionary.GetBool
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::ProBuilder::PreferenceDictionary::*)(::StringW, bool)>(&::UnityEngine::ProBuilder::PreferenceDictionary::GetBool)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x66ccd0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::PreferenceDictionary*>(), { "GetBool", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::PreferenceDictionary.GetInt
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::ProBuilder::PreferenceDictionary::*)(::StringW, int32_t)>(&::UnityEngine::ProBuilder::PreferenceDictionary::GetInt)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x66ccda0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::PreferenceDictionary*>(), { "GetInt", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::PreferenceDictionary.GetFloat
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::ProBuilder::PreferenceDictionary::*)(::StringW, float_t)>(&::UnityEngine::ProBuilder::PreferenceDictionary::GetFloat)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x66cce28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::PreferenceDictionary*>(), { "GetFloat", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::PreferenceDictionary.GetString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::ProBuilder::PreferenceDictionary::*)(::StringW, ::StringW)>(
    &::UnityEngine::ProBuilder::PreferenceDictionary::GetString)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x66cceb8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::PreferenceDictionary*>(), { "GetString", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::PreferenceDictionary.GetColor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Color (::UnityEngine::ProBuilder::PreferenceDictionary::*)(::StringW, ::UnityEngine::Color)>(
    &::UnityEngine::ProBuilder::PreferenceDictionary::GetColor)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x66ccf40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::PreferenceDictionary*>(),
                                                                                           { "GetColor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::Color>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::PreferenceDictionary.GetMaterial
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Material> (::UnityEngine::ProBuilder::PreferenceDictionary::*)(::StringW, ::UnityEngine::Material*)>(
    &::UnityEngine::ProBuilder::PreferenceDictionary::GetMaterial)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x66ccff4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::PreferenceDictionary*>(),
                                                                                           { "GetMaterial", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::Material*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::PreferenceDictionary.SetBool
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ProBuilder::PreferenceDictionary::*)(::StringW, bool)>(&::UnityEngine::ProBuilder::PreferenceDictionary::SetBool)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x66cd07c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::PreferenceDictionary*>(), { "SetBool", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::PreferenceDictionary.SetInt
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ProBuilder::PreferenceDictionary::*)(::StringW, int32_t)>(&::UnityEngine::ProBuilder::PreferenceDictionary::SetInt)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x66cd0f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::PreferenceDictionary*>(), { "SetInt", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::PreferenceDictionary.SetFloat
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ProBuilder::PreferenceDictionary::*)(::StringW, float_t)>(&::UnityEngine::ProBuilder::PreferenceDictionary::SetFloat)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x66cd174;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::PreferenceDictionary*>(), { "SetFloat", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::PreferenceDictionary.SetString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ProBuilder::PreferenceDictionary::*)(::StringW, ::StringW)>(&::UnityEngine::ProBuilder::PreferenceDictionary::SetString)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x66cd1f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::PreferenceDictionary*>(), { "SetString", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::PreferenceDictionary.SetColor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ProBuilder::PreferenceDictionary::*)(::StringW, ::UnityEngine::Color)>(
    &::UnityEngine::ProBuilder::PreferenceDictionary::SetColor)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x66cd274;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::PreferenceDictionary*>(),
                                                                                           { "SetColor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::Color>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::PreferenceDictionary.SetMaterial
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ProBuilder::PreferenceDictionary::*)(::StringW, ::UnityEngine::Material*)>(
    &::UnityEngine::ProBuilder::PreferenceDictionary::SetMaterial)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x66cd318;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::PreferenceDictionary*>(),
                                                                                           { "SetMaterial", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::Material*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::PreferenceDictionary.GetBoolDictionary
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::Dictionary_2<::StringW, bool>* (::UnityEngine::ProBuilder::PreferenceDictionary::*)()>(
    &::UnityEngine::ProBuilder::PreferenceDictionary::GetBoolDictionary)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x66cd394;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::PreferenceDictionary*>(), { "GetBoolDictionary", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::PreferenceDictionary.GetIntDictionary
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::Dictionary_2<::StringW, int32_t>* (::UnityEngine::ProBuilder::PreferenceDictionary::*)()>(
    &::UnityEngine::ProBuilder::PreferenceDictionary::GetIntDictionary)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x66cd39c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::PreferenceDictionary*>(), { "GetIntDictionary", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::PreferenceDictionary.GetFloatDictionary
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::Dictionary_2<::StringW, float_t>* (::UnityEngine::ProBuilder::PreferenceDictionary::*)()>(
    &::UnityEngine::ProBuilder::PreferenceDictionary::GetFloatDictionary)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x66cd3a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::PreferenceDictionary*>(), { "GetFloatDictionary", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::PreferenceDictionary.GetStringDictionary
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* (::UnityEngine::ProBuilder::PreferenceDictionary::*)()>(
    &::UnityEngine::ProBuilder::PreferenceDictionary::GetStringDictionary)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x66cd3ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::PreferenceDictionary*>(), { "GetStringDictionary", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::PreferenceDictionary.GetColorDictionary
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::Color>* (::UnityEngine::ProBuilder::PreferenceDictionary::*)()>(
    &::UnityEngine::ProBuilder::PreferenceDictionary::GetColorDictionary)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x66cd3b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::PreferenceDictionary*>(), { "GetColorDictionary", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::PreferenceDictionary.GetMaterialDictionary
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::Dictionary_2<::StringW, ::UnityW<::UnityEngine::Material>>* (
    ::UnityEngine::ProBuilder::PreferenceDictionary::*)()>(&::UnityEngine::ProBuilder::PreferenceDictionary::GetMaterialDictionary)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x66cd3bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::PreferenceDictionary*>(), { "GetMaterialDictionary", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::PreferenceDictionary.Clear
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ProBuilder::PreferenceDictionary::*)()>(&::UnityEngine::ProBuilder::PreferenceDictionary::Clear)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x66cd3c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::PreferenceDictionary*>(), { "Clear", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::PreferenceDictionary._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ProBuilder::PreferenceDictionary::*)()>(&::UnityEngine::ProBuilder::PreferenceDictionary::_ctor)> {
  constexpr static std::size_t size = 0x2bc;
  constexpr static std::size_t addrs = 0x66cd4b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::PreferenceDictionary*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::Dictionary_2<::StringW, bool>*& UnityEngine::ProBuilder::PreferenceDictionary::__cordl_internal_get_m_Bool() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Bool;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW, bool>* const& UnityEngine::ProBuilder::PreferenceDictionary::__cordl_internal_get_m_Bool() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Bool;
}
constexpr void UnityEngine::ProBuilder::PreferenceDictionary::__cordl_internal_set_m_Bool(::System::Collections::Generic::Dictionary_2<::StringW, bool>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Bool = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW, int32_t>*& UnityEngine::ProBuilder::PreferenceDictionary::__cordl_internal_get_m_Int() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Int;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW, int32_t>* const& UnityEngine::ProBuilder::PreferenceDictionary::__cordl_internal_get_m_Int() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Int;
}
constexpr void UnityEngine::ProBuilder::PreferenceDictionary::__cordl_internal_set_m_Int(::System::Collections::Generic::Dictionary_2<::StringW, int32_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Int = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW, float_t>*& UnityEngine::ProBuilder::PreferenceDictionary::__cordl_internal_get_m_Float() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Float;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW, float_t>* const& UnityEngine::ProBuilder::PreferenceDictionary::__cordl_internal_get_m_Float() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Float;
}
constexpr void UnityEngine::ProBuilder::PreferenceDictionary::__cordl_internal_set_m_Float(::System::Collections::Generic::Dictionary_2<::StringW, float_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Float = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*& UnityEngine::ProBuilder::PreferenceDictionary::__cordl_internal_get_m_String() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_String;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* const& UnityEngine::ProBuilder::PreferenceDictionary::__cordl_internal_get_m_String() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_String;
}
constexpr void UnityEngine::ProBuilder::PreferenceDictionary::__cordl_internal_set_m_String(::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_String = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::Color>*& UnityEngine::ProBuilder::PreferenceDictionary::__cordl_internal_get_m_Color() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Color;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::Color>* const& UnityEngine::ProBuilder::PreferenceDictionary::__cordl_internal_get_m_Color() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Color;
}
constexpr void UnityEngine::ProBuilder::PreferenceDictionary::__cordl_internal_set_m_Color(::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::Color>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Color = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::UnityW<::UnityEngine::Material>>*& UnityEngine::ProBuilder::PreferenceDictionary::__cordl_internal_get_m_Material() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Material;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::UnityW<::UnityEngine::Material>>* const& UnityEngine::ProBuilder::PreferenceDictionary::__cordl_internal_get_m_Material() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Material;
}
constexpr void UnityEngine::ProBuilder::PreferenceDictionary::__cordl_internal_set_m_Material(::System::Collections::Generic::Dictionary_2<::StringW, ::UnityW<::UnityEngine::Material>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Material = value;
}
constexpr ::System::Collections::Generic::List_1<::StringW>*& UnityEngine::ProBuilder::PreferenceDictionary::__cordl_internal_get_m_Bool_keys() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Bool_keys;
}
constexpr ::System::Collections::Generic::List_1<::StringW>* const& UnityEngine::ProBuilder::PreferenceDictionary::__cordl_internal_get_m_Bool_keys() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Bool_keys;
}
constexpr void UnityEngine::ProBuilder::PreferenceDictionary::__cordl_internal_set_m_Bool_keys(::System::Collections::Generic::List_1<::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Bool_keys = value;
}
constexpr ::System::Collections::Generic::List_1<::StringW>*& UnityEngine::ProBuilder::PreferenceDictionary::__cordl_internal_get_m_Int_keys() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Int_keys;
}
constexpr ::System::Collections::Generic::List_1<::StringW>* const& UnityEngine::ProBuilder::PreferenceDictionary::__cordl_internal_get_m_Int_keys() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Int_keys;
}
constexpr void UnityEngine::ProBuilder::PreferenceDictionary::__cordl_internal_set_m_Int_keys(::System::Collections::Generic::List_1<::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Int_keys = value;
}
constexpr ::System::Collections::Generic::List_1<::StringW>*& UnityEngine::ProBuilder::PreferenceDictionary::__cordl_internal_get_m_Float_keys() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Float_keys;
}
constexpr ::System::Collections::Generic::List_1<::StringW>* const& UnityEngine::ProBuilder::PreferenceDictionary::__cordl_internal_get_m_Float_keys() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Float_keys;
}
constexpr void UnityEngine::ProBuilder::PreferenceDictionary::__cordl_internal_set_m_Float_keys(::System::Collections::Generic::List_1<::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Float_keys = value;
}
constexpr ::System::Collections::Generic::List_1<::StringW>*& UnityEngine::ProBuilder::PreferenceDictionary::__cordl_internal_get_m_String_keys() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_String_keys;
}
constexpr ::System::Collections::Generic::List_1<::StringW>* const& UnityEngine::ProBuilder::PreferenceDictionary::__cordl_internal_get_m_String_keys() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_String_keys;
}
constexpr void UnityEngine::ProBuilder::PreferenceDictionary::__cordl_internal_set_m_String_keys(::System::Collections::Generic::List_1<::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_String_keys = value;
}
constexpr ::System::Collections::Generic::List_1<::StringW>*& UnityEngine::ProBuilder::PreferenceDictionary::__cordl_internal_get_m_Color_keys() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Color_keys;
}
constexpr ::System::Collections::Generic::List_1<::StringW>* const& UnityEngine::ProBuilder::PreferenceDictionary::__cordl_internal_get_m_Color_keys() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Color_keys;
}
constexpr void UnityEngine::ProBuilder::PreferenceDictionary::__cordl_internal_set_m_Color_keys(::System::Collections::Generic::List_1<::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Color_keys = value;
}
constexpr ::System::Collections::Generic::List_1<::StringW>*& UnityEngine::ProBuilder::PreferenceDictionary::__cordl_internal_get_m_Material_keys() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Material_keys;
}
constexpr ::System::Collections::Generic::List_1<::StringW>* const& UnityEngine::ProBuilder::PreferenceDictionary::__cordl_internal_get_m_Material_keys() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Material_keys;
}
constexpr void UnityEngine::ProBuilder::PreferenceDictionary::__cordl_internal_set_m_Material_keys(::System::Collections::Generic::List_1<::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Material_keys = value;
}
constexpr ::System::Collections::Generic::List_1<bool>*& UnityEngine::ProBuilder::PreferenceDictionary::__cordl_internal_get_m_Bool_values() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Bool_values;
}
constexpr ::System::Collections::Generic::List_1<bool>* const& UnityEngine::ProBuilder::PreferenceDictionary::__cordl_internal_get_m_Bool_values() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Bool_values;
}
constexpr void UnityEngine::ProBuilder::PreferenceDictionary::__cordl_internal_set_m_Bool_values(::System::Collections::Generic::List_1<bool>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Bool_values = value;
}
constexpr ::System::Collections::Generic::List_1<int32_t>*& UnityEngine::ProBuilder::PreferenceDictionary::__cordl_internal_get_m_Int_values() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Int_values;
}
constexpr ::System::Collections::Generic::List_1<int32_t>* const& UnityEngine::ProBuilder::PreferenceDictionary::__cordl_internal_get_m_Int_values() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Int_values;
}
constexpr void UnityEngine::ProBuilder::PreferenceDictionary::__cordl_internal_set_m_Int_values(::System::Collections::Generic::List_1<int32_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Int_values = value;
}
constexpr ::System::Collections::Generic::List_1<float_t>*& UnityEngine::ProBuilder::PreferenceDictionary::__cordl_internal_get_m_Float_values() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Float_values;
}
constexpr ::System::Collections::Generic::List_1<float_t>* const& UnityEngine::ProBuilder::PreferenceDictionary::__cordl_internal_get_m_Float_values() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Float_values;
}
constexpr void UnityEngine::ProBuilder::PreferenceDictionary::__cordl_internal_set_m_Float_values(::System::Collections::Generic::List_1<float_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Float_values = value;
}
constexpr ::System::Collections::Generic::List_1<::StringW>*& UnityEngine::ProBuilder::PreferenceDictionary::__cordl_internal_get_m_String_values() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_String_values;
}
constexpr ::System::Collections::Generic::List_1<::StringW>* const& UnityEngine::ProBuilder::PreferenceDictionary::__cordl_internal_get_m_String_values() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_String_values;
}
constexpr void UnityEngine::ProBuilder::PreferenceDictionary::__cordl_internal_set_m_String_values(::System::Collections::Generic::List_1<::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_String_values = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Color>*& UnityEngine::ProBuilder::PreferenceDictionary::__cordl_internal_get_m_Color_values() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Color_values;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Color>* const& UnityEngine::ProBuilder::PreferenceDictionary::__cordl_internal_get_m_Color_values() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Color_values;
}
constexpr void UnityEngine::ProBuilder::PreferenceDictionary::__cordl_internal_set_m_Color_values(::System::Collections::Generic::List_1<::UnityEngine::Color>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Color_values = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Material>>*& UnityEngine::ProBuilder::PreferenceDictionary::__cordl_internal_get_m_Material_values() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Material_values;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Material>>* const& UnityEngine::ProBuilder::PreferenceDictionary::__cordl_internal_get_m_Material_values() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Material_values;
}
constexpr void UnityEngine::ProBuilder::PreferenceDictionary::__cordl_internal_set_m_Material_values(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Material>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Material_values = value;
}
inline void UnityEngine::ProBuilder::PreferenceDictionary::OnBeforeSerialize() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::PreferenceDictionary*>(), { "OnBeforeSerialize", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::ProBuilder::PreferenceDictionary::OnAfterDeserialize() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::PreferenceDictionary*>(), { "OnAfterDeserialize", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::ProBuilder::PreferenceDictionary::SetDefaultValues() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::PreferenceDictionary*>(), { "SetDefaultValues", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::ProBuilder::PreferenceDictionary::HasKey(::StringW key) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::PreferenceDictionary*>(), { "HasKey", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, key);
}
template <typename T> inline bool UnityEngine::ProBuilder::PreferenceDictionary::HasKey(::StringW key) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::PreferenceDictionary*>(), { "HasKey", { ::i2c::class_of<T>() }, { ::i2c::type_of<::StringW>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, key);
}
inline void UnityEngine::ProBuilder::PreferenceDictionary::DeleteKey(::StringW key) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::PreferenceDictionary*>(), { "DeleteKey", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, key);
}
template <typename T> inline T UnityEngine::ProBuilder::PreferenceDictionary::Get(::StringW key, T fallback) {
  static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::PreferenceDictionary*>(),
                                                                                              { "Get", { ::i2c::class_of<T>() }, { ::i2c::type_of<::StringW>(), ::i2c::type_of<T>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method, key, fallback);
}
template <typename T> inline void UnityEngine::ProBuilder::PreferenceDictionary::Set(::StringW key, T value) {
  static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::PreferenceDictionary*>(),
                                                                                              { "Set", { ::i2c::class_of<T>() }, { ::i2c::type_of<::StringW>(), ::i2c::type_of<T>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, key, value);
}
inline bool UnityEngine::ProBuilder::PreferenceDictionary::GetBool(::StringW key, bool fallback) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::PreferenceDictionary*>(), { "GetBool", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, key, fallback);
}
inline int32_t UnityEngine::ProBuilder::PreferenceDictionary::GetInt(::StringW key, int32_t fallback) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::PreferenceDictionary*>(), { "GetInt", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, key, fallback);
}
inline float_t UnityEngine::ProBuilder::PreferenceDictionary::GetFloat(::StringW key, float_t fallback) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::PreferenceDictionary*>(), { "GetFloat", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, key, fallback);
}
inline ::StringW UnityEngine::ProBuilder::PreferenceDictionary::GetString(::StringW key, ::StringW fallback) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::PreferenceDictionary*>(), { "GetString", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, key, fallback);
}
inline ::UnityEngine::Color UnityEngine::ProBuilder::PreferenceDictionary::GetColor(::StringW key, ::UnityEngine::Color fallback) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::PreferenceDictionary*>(),
                                                                                         { "GetColor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::Color>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color>(this, ___internal_method, key, fallback);
}
inline ::UnityW<::UnityEngine::Material> UnityEngine::ProBuilder::PreferenceDictionary::GetMaterial(::StringW key, ::UnityEngine::Material* fallback) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::PreferenceDictionary*>(),
                                                                                         { "GetMaterial", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::Material*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Material>>(this, ___internal_method, key, fallback);
}
inline void UnityEngine::ProBuilder::PreferenceDictionary::SetBool(::StringW key, bool value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::PreferenceDictionary*>(), { "SetBool", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, key, value);
}
inline void UnityEngine::ProBuilder::PreferenceDictionary::SetInt(::StringW key, int32_t value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::PreferenceDictionary*>(), { "SetInt", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, key, value);
}
inline void UnityEngine::ProBuilder::PreferenceDictionary::SetFloat(::StringW key, float_t value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::PreferenceDictionary*>(), { "SetFloat", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, key, value);
}
inline void UnityEngine::ProBuilder::PreferenceDictionary::SetString(::StringW key, ::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::PreferenceDictionary*>(), { "SetString", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, key, value);
}
inline void UnityEngine::ProBuilder::PreferenceDictionary::SetColor(::StringW key, ::UnityEngine::Color value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::PreferenceDictionary*>(),
                                                                                         { "SetColor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::Color>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, key, value);
}
inline void UnityEngine::ProBuilder::PreferenceDictionary::SetMaterial(::StringW key, ::UnityEngine::Material* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::PreferenceDictionary*>(),
                                                                                         { "SetMaterial", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::Material*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, key, value);
}
inline ::System::Collections::Generic::Dictionary_2<::StringW, bool>* UnityEngine::ProBuilder::PreferenceDictionary::GetBoolDictionary() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::PreferenceDictionary*>(), { "GetBoolDictionary", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::Dictionary_2<::StringW, bool>*>(this, ___internal_method);
}
inline ::System::Collections::Generic::Dictionary_2<::StringW, int32_t>* UnityEngine::ProBuilder::PreferenceDictionary::GetIntDictionary() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::PreferenceDictionary*>(), { "GetIntDictionary", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::Dictionary_2<::StringW, int32_t>*>(this, ___internal_method);
}
inline ::System::Collections::Generic::Dictionary_2<::StringW, float_t>* UnityEngine::ProBuilder::PreferenceDictionary::GetFloatDictionary() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::PreferenceDictionary*>(), { "GetFloatDictionary", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::Dictionary_2<::StringW, float_t>*>(this, ___internal_method);
}
inline ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* UnityEngine::ProBuilder::PreferenceDictionary::GetStringDictionary() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::PreferenceDictionary*>(), { "GetStringDictionary", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*>(this, ___internal_method);
}
inline ::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::Color>* UnityEngine::ProBuilder::PreferenceDictionary::GetColorDictionary() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::PreferenceDictionary*>(), { "GetColorDictionary", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::Color>*>(this, ___internal_method);
}
inline ::System::Collections::Generic::Dictionary_2<::StringW, ::UnityW<::UnityEngine::Material>>* UnityEngine::ProBuilder::PreferenceDictionary::GetMaterialDictionary() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::PreferenceDictionary*>(), { "GetMaterialDictionary", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::Dictionary_2<::StringW, ::UnityW<::UnityEngine::Material>>*>(this, ___internal_method);
}
inline void UnityEngine::ProBuilder::PreferenceDictionary::Clear() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::PreferenceDictionary*>(), { "Clear", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::ProBuilder::PreferenceDictionary::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::PreferenceDictionary*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::ProBuilder::PreferenceDictionary* UnityEngine::ProBuilder::PreferenceDictionary::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::ProBuilder::PreferenceDictionary*>());
}
/// @brief Convert operator to "::UnityEngine::ISerializationCallbackReceiver"
constexpr UnityEngine::ProBuilder::PreferenceDictionary::operator ::UnityEngine::ISerializationCallbackReceiver*() noexcept {
  return static_cast<::UnityEngine::ISerializationCallbackReceiver*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::ISerializationCallbackReceiver"
constexpr ::UnityEngine::ISerializationCallbackReceiver* UnityEngine::ProBuilder::PreferenceDictionary::i___UnityEngine__ISerializationCallbackReceiver() noexcept {
  return static_cast<::UnityEngine::ISerializationCallbackReceiver*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::ProBuilder::IHasDefault"
constexpr UnityEngine::ProBuilder::PreferenceDictionary::operator ::UnityEngine::ProBuilder::IHasDefault*() noexcept {
  return static_cast<::UnityEngine::ProBuilder::IHasDefault*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::ProBuilder::IHasDefault"
constexpr ::UnityEngine::ProBuilder::IHasDefault* UnityEngine::ProBuilder::PreferenceDictionary::i___UnityEngine__ProBuilder__IHasDefault() noexcept {
  return static_cast<::UnityEngine::ProBuilder::IHasDefault*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::ProBuilder::PreferenceDictionary::PreferenceDictionary() {}
