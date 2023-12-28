#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_Parameters_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_HoudiniAsset_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "HoudiniEngineUnity/zzzz__HAPI_NodeInfo_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_InputNode_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_Parameters_def.hpp"
#include "HoudiniEngineUnity/zzzz__HAPI_ParmChoiceInfo_def.hpp"
#include "HoudiniEngineUnity/zzzz__HAPI_TransformEuler_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_ParameterModifier_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_ParameterData_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_SessionBase_def.hpp"
#include "HoudiniEngineUnity/zzzz__IEquivable_1_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "HoudiniEngineUnity/zzzz__HAPI_ParmInfo_def.hpp"
#include "System/zzzz__Predicate_1_def.hpp"
//  Writing Method size for method: ::HoudiniEngineUnity::__HEU_Parameters____c__DisplayClass35_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::__HEU_Parameters____c__DisplayClass35_0::*)()>(
    &::HoudiniEngineUnity::__HEU_Parameters____c__DisplayClass35_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2194ea8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::__HEU_Parameters____c__DisplayClass35_0*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::__HEU_Parameters____c__DisplayClass35_0._Initialize_b__0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::__HEU_Parameters____c__DisplayClass35_0::*)(::HoudiniEngineUnity::HAPI_ParmInfo)>(
    &::HoudiniEngineUnity::__HEU_Parameters____c__DisplayClass35_0::_Initialize_b__0)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2197a58;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::__HEU_Parameters____c__DisplayClass35_0*>::get(), "<Initialize>b__0", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HAPI_ParmInfo>::get() })));
    return ___internal_method;
  }
};
constexpr int32_t& HoudiniEngineUnity::__HEU_Parameters____c__DisplayClass35_0::__get_parentID() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___parentID;
}
constexpr int32_t const& HoudiniEngineUnity::__HEU_Parameters____c__DisplayClass35_0::__get_parentID() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___parentID;
}
constexpr void HoudiniEngineUnity::__HEU_Parameters____c__DisplayClass35_0::__set_parentID(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___parentID = value;
}
constexpr ::System::Predicate_1<::HoudiniEngineUnity::HAPI_ParmInfo>*& HoudiniEngineUnity::__HEU_Parameters____c__DisplayClass35_0::__get___9__0() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____9__0;
}
constexpr ::cordl_internals::to_const_pointer<::System::Predicate_1<::HoudiniEngineUnity::HAPI_ParmInfo>*> const& HoudiniEngineUnity::__HEU_Parameters____c__DisplayClass35_0::__get___9__0() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____9__0;
}
constexpr void HoudiniEngineUnity::__HEU_Parameters____c__DisplayClass35_0::__set___9__0(::System::Predicate_1<::HoudiniEngineUnity::HAPI_ParmInfo>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____9__0)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::HoudiniEngineUnity::__HEU_Parameters____c__DisplayClass35_0* HoudiniEngineUnity::__HEU_Parameters____c__DisplayClass35_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::HoudiniEngineUnity::__HEU_Parameters____c__DisplayClass35_0*>());
}
inline void HoudiniEngineUnity::__HEU_Parameters____c__DisplayClass35_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::__HEU_Parameters____c__DisplayClass35_0*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool HoudiniEngineUnity::__HEU_Parameters____c__DisplayClass35_0::_Initialize_b__0(::HoudiniEngineUnity::HAPI_ParmInfo p) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::__HEU_Parameters____c__DisplayClass35_0*>::get(), "<Initialize>b__0",
                                  std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HAPI_ParmInfo>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, p);
}
// Ctor Parameters []
constexpr ::HoudiniEngineUnity::__HEU_Parameters____c__DisplayClass35_0::__HEU_Parameters____c__DisplayClass35_0() {}
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_Parameters.get_RootParameters
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<int32_t>* (::HoudiniEngineUnity::HEU_Parameters::*)()>(
    &::HoudiniEngineUnity::HEU_Parameters::get_RootParameters)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2193058;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_Parameters*>::get(),
                                                                               "get_RootParameters", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_Parameters.set_RootParameters
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_Parameters::*)(::System::Collections::Generic::List_1<int32_t>*)>(
    &::HoudiniEngineUnity::HEU_Parameters::set_RootParameters)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2193060;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_Parameters*>::get(), "set_RootParameters", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<int32_t>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_Parameters.get_ParameterModifiers
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_ParameterModifier*>* (
    ::HoudiniEngineUnity::HEU_Parameters::*)()>(&::HoudiniEngineUnity::HEU_Parameters::get_ParameterModifiers)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2193068;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_Parameters*>::get(),
                                                                               "get_ParameterModifiers", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_Parameters.set_ParameterModifiers
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_Parameters::*)(
    ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_ParameterModifier*>*)>(&::HoudiniEngineUnity::HEU_Parameters::set_ParameterModifiers)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2193070;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_Parameters*>::get(), "set_ParameterModifiers", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_ParameterModifier*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_Parameters.get_RequiresRegeneration
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_Parameters::*)()>(&::HoudiniEngineUnity::HEU_Parameters::get_RequiresRegeneration)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2193078;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_Parameters*>::get(),
                                                                               "get_RequiresRegeneration", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_Parameters.set_RequiresRegeneration
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_Parameters::*)(bool)>(
    &::HoudiniEngineUnity::HEU_Parameters::set_RequiresRegeneration)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2193080;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_Parameters*>::get(), "set_RequiresRegeneration",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_Parameters.GetPresetData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t, ::Array<uint8_t>*> (::HoudiniEngineUnity::HEU_Parameters::*)()>(
    &::HoudiniEngineUnity::HEU_Parameters::GetPresetData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x219308c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_Parameters*>::get(), "GetPresetData",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_Parameters.SetPresetData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_Parameters::*)(::ArrayW<uint8_t, ::Array<uint8_t>*>)>(
    &::HoudiniEngineUnity::HEU_Parameters::SetPresetData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2193094;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_Parameters*>::get(), "SetPresetData", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_Parameters.GetDefaultPresetData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t, ::Array<uint8_t>*> (::HoudiniEngineUnity::HEU_Parameters::*)()>(
    &::HoudiniEngineUnity::HEU_Parameters::GetDefaultPresetData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x219309c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_Parameters*>::get(),
                                                                               "GetDefaultPresetData", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_Parameters.AreParametersValid
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_Parameters::*)()>(&::HoudiniEngineUnity::HEU_Parameters::AreParametersValid)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21930a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_Parameters*>::get(),
                                                                               "AreParametersValid", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_Parameters.get_ShowParameters
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_Parameters::*)()>(&::HoudiniEngineUnity::HEU_Parameters::get_ShowParameters)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21930ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_Parameters*>::get(),
                                                                               "get_ShowParameters", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_Parameters.set_ShowParameters
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_Parameters::*)(bool)>(&::HoudiniEngineUnity::HEU_Parameters::set_ShowParameters)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x21930b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_Parameters*>::get(), "set_ShowParameters",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_Parameters.get_RecacheUI
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_Parameters::*)()>(&::HoudiniEngineUnity::HEU_Parameters::get_RecacheUI)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21930c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_Parameters*>::get(), "get_RecacheUI",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_Parameters.set_RecacheUI
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_Parameters::*)(bool)>(&::HoudiniEngineUnity::HEU_Parameters::set_RecacheUI)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x21930c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_Parameters*>::get(), "set_RecacheUI", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_Parameters.CleanUp
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_Parameters::*)()>(&::HoudiniEngineUnity::HEU_Parameters::CleanUp)> {
  constexpr static std::size_t size = 0x29c;
  constexpr static std::size_t addrs = 0x21930d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_Parameters*>::get(), "CleanUp",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_Parameters.Initialize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_Parameters::*)(
    ::HoudiniEngineUnity::HEU_SessionBase*, int32_t, ByRef<::HoudiniEngineUnity::HAPI_NodeInfo>, ::System::Collections::Generic::Dictionary_2<::StringW, ::HoudiniEngineUnity::HEU_ParameterData*>*,
    ::System::Collections::Generic::Dictionary_2<::StringW, ::HoudiniEngineUnity::HEU_InputNode*>*, ::HoudiniEngineUnity::HEU_HoudiniAsset*)>(&::HoudiniEngineUnity::HEU_Parameters::Initialize)> {
  constexpr static std::size_t size = 0x1b38;
  constexpr static std::size_t addrs = 0x2193370;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_Parameters*>::get(), "Initialize", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::HoudiniEngineUnity::HAPI_NodeInfo>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Dictionary_2<::StringW, ::HoudiniEngineUnity::HEU_ParameterData*>*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Dictionary_2<::StringW, ::HoudiniEngineUnity::HEU_InputNode*>*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_Parameters.SetupRampParameter
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_Parameters::*)(::HoudiniEngineUnity::HEU_ParameterData*)>(
    &::HoudiniEngineUnity::HEU_Parameters::SetupRampParameter)> {
  constexpr static std::size_t size = 0x3f0;
  constexpr static std::size_t addrs = 0x2194eb0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_Parameters*>::get(), "SetupRampParameter", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_ParameterData*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_Parameters.GetParameters
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_ParameterData*>* (::HoudiniEngineUnity::HEU_Parameters::*)()>(&::HoudiniEngineUnity::HEU_Parameters::GetParameters)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21952a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_Parameters*>::get(), "GetParameters",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_Parameters.GetParameter
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::HoudiniEngineUnity::HEU_ParameterData* (::HoudiniEngineUnity::HEU_Parameters::*)(int32_t)>(
    &::HoudiniEngineUnity::HEU_Parameters::GetParameter)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x2190910;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_Parameters*>::get(), "GetParameter", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_Parameters.GetParameter
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::HoudiniEngineUnity::HEU_ParameterData* (::HoudiniEngineUnity::HEU_Parameters::*)(::StringW)>(
    &::HoudiniEngineUnity::HEU_Parameters::GetParameter)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x21952a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_Parameters*>::get(), "GetParameter", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_Parameters.GetParameterWithParmID
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::HoudiniEngineUnity::HEU_ParameterData* (::HoudiniEngineUnity::HEU_Parameters::*)(int32_t)>(
    &::HoudiniEngineUnity::HEU_Parameters::GetParameterWithParmID)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x219074c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_Parameters*>::get(), "GetParameterWithParmID",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_Parameters.RemoveParameter
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_Parameters::*)(int32_t)>(&::HoudiniEngineUnity::HEU_Parameters::RemoveParameter)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x2195438;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_Parameters*>::get(), "RemoveParameter", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_Parameters.GetChosenIndexFromChoiceList
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::HoudiniEngineUnity::HEU_Parameters::*)(::HoudiniEngineUnity::HEU_ParameterData*)>(
    &::HoudiniEngineUnity::HEU_Parameters::GetChosenIndexFromChoiceList)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x21954b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_Parameters*>::get(), "GetChosenIndexFromChoiceList", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_ParameterData*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_Parameters.GetStringFromParameter
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::HoudiniEngineUnity::HEU_Parameters::*)(::StringW)>(
    &::HoudiniEngineUnity::HEU_Parameters::GetStringFromParameter)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x2195564;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_Parameters*>::get(), "GetStringFromParameter",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_Parameters.SetStringToParameter
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_Parameters::*)(::StringW, ::StringW)>(
    &::HoudiniEngineUnity::HEU_Parameters::SetStringToParameter)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x21955ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_Parameters*>::get(), "SetStringToParameter", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_Parameters.HaveParametersChanged
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_Parameters::*)()>(&::HoudiniEngineUnity::HEU_Parameters::HaveParametersChanged)> {
  constexpr static std::size_t size = 0x410;
  constexpr static std::size_t addrs = 0x219561c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_Parameters*>::get(),
                                                                               "HaveParametersChanged", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_Parameters.UploadValuesToHoudini
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_Parameters::*)(
    ::HoudiniEngineUnity::HEU_SessionBase*, ::HoudiniEngineUnity::HEU_HoudiniAsset*, bool, bool)>(&::HoudiniEngineUnity::HEU_Parameters::UploadValuesToHoudini)> {
  constexpr static std::size_t size = 0x71c;
  constexpr static std::size_t addrs = 0x2195a2c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_Parameters*>::get(), "UploadValuesToHoudini", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_Parameters.InsertInstanceToMultiParm
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_Parameters::*)(int32_t, int32_t, int32_t)>(
    &::HoudiniEngineUnity::HEU_Parameters::InsertInstanceToMultiParm)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x2196148;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_Parameters*>::get(), "InsertInstanceToMultiParm", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_Parameters.RemoveInstancesFromMultiParm
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_Parameters::*)(int32_t, int32_t, int32_t)>(
    &::HoudiniEngineUnity::HEU_Parameters::RemoveInstancesFromMultiParm)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x219621c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_Parameters*>::get(), "RemoveInstancesFromMultiParm", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_Parameters.ClearInstancesFromMultiParm
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_Parameters::*)(int32_t)>(
    &::HoudiniEngineUnity::HEU_Parameters::ClearInstancesFromMultiParm)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x21962f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_Parameters*>::get(), "ClearInstancesFromMultiParm",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_Parameters.HasModifiersPending
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_Parameters::*)()>(&::HoudiniEngineUnity::HEU_Parameters::HasModifiersPending)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x21963b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_Parameters*>::get(),
                                                                               "HasModifiersPending", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_Parameters.ProcessModifiers
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_Parameters::*)(::HoudiniEngineUnity::HEU_SessionBase*)>(
    &::HoudiniEngineUnity::HEU_Parameters::ProcessModifiers)> {
  constexpr static std::size_t size = 0x694;
  constexpr static std::size_t addrs = 0x2196400;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_Parameters*>::get(), "ProcessModifiers", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_Parameters.GetParameterDataForUIRestore
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_Parameters::*)(
    ::System::Collections::Generic::Dictionary_2<::StringW, ::HoudiniEngineUnity::HEU_ParameterData*>*,
    ::System::Collections::Generic::Dictionary_2<::StringW, ::HoudiniEngineUnity::HEU_InputNode*>*)>(&::HoudiniEngineUnity::HEU_Parameters::GetParameterDataForUIRestore)> {
  constexpr static std::size_t size = 0x1e8;
  constexpr static std::size_t addrs = 0x2196a94;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_Parameters*>::get(), "GetParameterDataForUIRestore", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Dictionary_2<::StringW, ::HoudiniEngineUnity::HEU_ParameterData*>*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Dictionary_2<::StringW, ::HoudiniEngineUnity::HEU_InputNode*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_Parameters.GetInputNodeConnectionObjects
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_Parameters::*)(::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*)>(
    &::HoudiniEngineUnity::HEU_Parameters::GetInputNodeConnectionObjects)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2196c7c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_Parameters*>::get(), "GetInputNodeConnectionObjects", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_Parameters.DownloadPresetData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_Parameters::*)(::HoudiniEngineUnity::HEU_SessionBase*)>(
    &::HoudiniEngineUnity::HEU_Parameters::DownloadPresetData)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x2196c80;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_Parameters*>::get(), "DownloadPresetData", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_Parameters.UploadPresetData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_Parameters::*)(::HoudiniEngineUnity::HEU_SessionBase*)>(
    &::HoudiniEngineUnity::HEU_Parameters::UploadPresetData)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2196cd0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_Parameters*>::get(), "UploadPresetData", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_Parameters.DownloadAsDefaultPresetData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_Parameters::*)(::HoudiniEngineUnity::HEU_SessionBase*)>(
    &::HoudiniEngineUnity::HEU_Parameters::DownloadAsDefaultPresetData)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x2196d14;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_Parameters*>::get(), "DownloadAsDefaultPresetData", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_Parameters.UploadParameterInputs
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_Parameters::*)(
    ::HoudiniEngineUnity::HEU_SessionBase*, ::HoudiniEngineUnity::HEU_HoudiniAsset*, bool)>(&::HoudiniEngineUnity::HEU_Parameters::UploadParameterInputs)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x2196d64;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_Parameters*>::get(), "UploadParameterInputs", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_Parameters.UpdateTransformParameters
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_Parameters::*)(
    ::HoudiniEngineUnity::HEU_SessionBase*, ByRef<::HoudiniEngineUnity::HAPI_TransformEuler>)>(&::HoudiniEngineUnity::HEU_Parameters::UpdateTransformParameters)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x2196f44;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_Parameters*>::get(), "UpdateTransformParameters", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::HoudiniEngineUnity::HAPI_TransformEuler>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_Parameters.SyncParameterFromHoudini
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_Parameters::*)(::HoudiniEngineUnity::HEU_SessionBase*, ::StringW)>(
    &::HoudiniEngineUnity::HEU_Parameters::SyncParameterFromHoudini)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x2196fec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_Parameters*>::get(), "SyncParameterFromHoudini", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_Parameters.SyncInternalParametersForUndoCompare
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_Parameters::*)(::HoudiniEngineUnity::HEU_SessionBase*)>(
    &::HoudiniEngineUnity::HEU_Parameters::SyncInternalParametersForUndoCompare)> {
  constexpr static std::size_t size = 0x41c;
  constexpr static std::size_t addrs = 0x219706c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_Parameters*>::get(), "SyncInternalParametersForUndoCompare", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_Parameters.ResetAllToDefault
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_Parameters::*)(::HoudiniEngineUnity::HEU_SessionBase*)>(
    &::HoudiniEngineUnity::HEU_Parameters::ResetAllToDefault)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x2197488;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_Parameters*>::get(), "ResetAllToDefault", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_Parameters.IsEquivalentTo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_Parameters::*)(::HoudiniEngineUnity::HEU_Parameters*)>(
    &::HoudiniEngineUnity::HEU_Parameters::IsEquivalentTo)> {
  constexpr static std::size_t size = 0x318;
  constexpr static std::size_t addrs = 0x2197610;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_Parameters*>::get(), "IsEquivalentTo", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_Parameters*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_Parameters._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_Parameters::*)()>(&::HoudiniEngineUnity::HEU_Parameters::_ctor)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x2197928;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_Parameters*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::HEU_Parameters*>"
constexpr HoudiniEngineUnity::HEU_Parameters::operator ::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::HEU_Parameters*>*() noexcept {
  return static_cast<::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::HEU_Parameters*>*>(static_cast<void*>(this));
}
constexpr int32_t& HoudiniEngineUnity::HEU_Parameters::__get__nodeID() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____nodeID;
}
constexpr int32_t const& HoudiniEngineUnity::HEU_Parameters::__get__nodeID() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____nodeID;
}
constexpr void HoudiniEngineUnity::HEU_Parameters::__set__nodeID(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____nodeID = value;
}
constexpr ::StringW& HoudiniEngineUnity::HEU_Parameters::__get__uiLabel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____uiLabel;
}
constexpr ::StringW const& HoudiniEngineUnity::HEU_Parameters::__get__uiLabel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____uiLabel;
}
constexpr void HoudiniEngineUnity::HEU_Parameters::__set__uiLabel(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____uiLabel)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& HoudiniEngineUnity::HEU_Parameters::__get__paramInts() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____paramInts;
}
constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& HoudiniEngineUnity::HEU_Parameters::__get__paramInts() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____paramInts;
}
constexpr void HoudiniEngineUnity::HEU_Parameters::__set__paramInts(::ArrayW<int32_t, ::Array<int32_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____paramInts)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<float_t, ::Array<float_t>*>& HoudiniEngineUnity::HEU_Parameters::__get__paramFloats() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____paramFloats;
}
constexpr ::ArrayW<float_t, ::Array<float_t>*> const& HoudiniEngineUnity::HEU_Parameters::__get__paramFloats() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____paramFloats;
}
constexpr void HoudiniEngineUnity::HEU_Parameters::__set__paramFloats(::ArrayW<float_t, ::Array<float_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____paramFloats)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& HoudiniEngineUnity::HEU_Parameters::__get__paramStrings() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____paramStrings;
}
constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& HoudiniEngineUnity::HEU_Parameters::__get__paramStrings() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____paramStrings;
}
constexpr void HoudiniEngineUnity::HEU_Parameters::__set__paramStrings(::ArrayW<::StringW, ::Array<::StringW>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____paramStrings)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::HoudiniEngineUnity::HAPI_ParmChoiceInfo, ::Array<::HoudiniEngineUnity::HAPI_ParmChoiceInfo>*>& HoudiniEngineUnity::HEU_Parameters::__get__paramChoices() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____paramChoices;
}
constexpr ::ArrayW<::HoudiniEngineUnity::HAPI_ParmChoiceInfo, ::Array<::HoudiniEngineUnity::HAPI_ParmChoiceInfo>*> const& HoudiniEngineUnity::HEU_Parameters::__get__paramChoices() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____paramChoices;
}
constexpr void HoudiniEngineUnity::HEU_Parameters::__set__paramChoices(::ArrayW<::HoudiniEngineUnity::HAPI_ParmChoiceInfo, ::Array<::HoudiniEngineUnity::HAPI_ParmChoiceInfo>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____paramChoices)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<int32_t>*& HoudiniEngineUnity::HEU_Parameters::__get__rootParameters() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rootParameters;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<int32_t>*> const& HoudiniEngineUnity::HEU_Parameters::__get__rootParameters() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rootParameters;
}
constexpr void HoudiniEngineUnity::HEU_Parameters::__set__rootParameters(::System::Collections::Generic::List_1<int32_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____rootParameters)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_ParameterData*>*& HoudiniEngineUnity::HEU_Parameters::__get__parameterList() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____parameterList;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_ParameterData*>*> const&
HoudiniEngineUnity::HEU_Parameters::__get__parameterList() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____parameterList;
}
constexpr void HoudiniEngineUnity::HEU_Parameters::__set__parameterList(::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_ParameterData*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____parameterList)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_ParameterModifier*>*& HoudiniEngineUnity::HEU_Parameters::__get__parameterModifiers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____parameterModifiers;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_ParameterModifier*>*> const&
HoudiniEngineUnity::HEU_Parameters::__get__parameterModifiers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____parameterModifiers;
}
constexpr void HoudiniEngineUnity::HEU_Parameters::__set__parameterModifiers(::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_ParameterModifier*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____parameterModifiers)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& HoudiniEngineUnity::HEU_Parameters::__get__regenerateParameters() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____regenerateParameters;
}
constexpr bool const& HoudiniEngineUnity::HEU_Parameters::__get__regenerateParameters() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____regenerateParameters;
}
constexpr void HoudiniEngineUnity::HEU_Parameters::__set__regenerateParameters(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____regenerateParameters = value;
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& HoudiniEngineUnity::HEU_Parameters::__get__presetData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____presetData;
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& HoudiniEngineUnity::HEU_Parameters::__get__presetData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____presetData;
}
constexpr void HoudiniEngineUnity::HEU_Parameters::__set__presetData(::ArrayW<uint8_t, ::Array<uint8_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____presetData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& HoudiniEngineUnity::HEU_Parameters::__get__defaultPresetData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____defaultPresetData;
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& HoudiniEngineUnity::HEU_Parameters::__get__defaultPresetData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____defaultPresetData;
}
constexpr void HoudiniEngineUnity::HEU_Parameters::__set__defaultPresetData(::ArrayW<uint8_t, ::Array<uint8_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____defaultPresetData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& HoudiniEngineUnity::HEU_Parameters::__get__validParameters() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____validParameters;
}
constexpr bool const& HoudiniEngineUnity::HEU_Parameters::__get__validParameters() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____validParameters;
}
constexpr void HoudiniEngineUnity::HEU_Parameters::__set__validParameters(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____validParameters = value;
}
constexpr bool& HoudiniEngineUnity::HEU_Parameters::__get__showParameters() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____showParameters;
}
constexpr bool const& HoudiniEngineUnity::HEU_Parameters::__get__showParameters() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____showParameters;
}
constexpr void HoudiniEngineUnity::HEU_Parameters::__set__showParameters(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____showParameters = value;
}
constexpr bool& HoudiniEngineUnity::HEU_Parameters::__get__recacheUI() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____recacheUI;
}
constexpr bool const& HoudiniEngineUnity::HEU_Parameters::__get__recacheUI() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____recacheUI;
}
constexpr void HoudiniEngineUnity::HEU_Parameters::__set__recacheUI(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____recacheUI = value;
}
inline ::System::Collections::Generic::List_1<int32_t>* HoudiniEngineUnity::HEU_Parameters::get_RootParameters() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_Parameters*>::get(), "get_RootParameters",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<int32_t>*, false>(this, ___internal_method);
}
inline void HoudiniEngineUnity::HEU_Parameters::set_RootParameters(::System::Collections::Generic::List_1<int32_t>* value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_Parameters*>::get(), "set_RootParameters", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<int32_t>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_ParameterModifier*>* HoudiniEngineUnity::HEU_Parameters::get_ParameterModifiers() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_Parameters*>::get(),
                                                                             "get_ParameterModifiers", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_ParameterModifier*>*, false>(this, ___internal_method);
}
inline void HoudiniEngineUnity::HEU_Parameters::set_ParameterModifiers(::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_ParameterModifier*>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_Parameters*>::get(), "set_ParameterModifiers", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_ParameterModifier*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool HoudiniEngineUnity::HEU_Parameters::get_RequiresRegeneration() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_Parameters*>::get(),
                                                                             "get_RequiresRegeneration", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void HoudiniEngineUnity::HEU_Parameters::set_RequiresRegeneration(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_Parameters*>::get(), "set_RequiresRegeneration",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> HoudiniEngineUnity::HEU_Parameters::GetPresetData() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_Parameters*>::get(), "GetPresetData",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t, ::Array<uint8_t>*>, false>(this, ___internal_method);
}
inline void HoudiniEngineUnity::HEU_Parameters::SetPresetData(::ArrayW<uint8_t, ::Array<uint8_t>*> data) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_Parameters*>::get(), "SetPresetData", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, data);
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> HoudiniEngineUnity::HEU_Parameters::GetDefaultPresetData() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_Parameters*>::get(),
                                                                             "GetDefaultPresetData", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t, ::Array<uint8_t>*>, false>(this, ___internal_method);
}
inline bool HoudiniEngineUnity::HEU_Parameters::AreParametersValid() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_Parameters*>::get(), "AreParametersValid",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool HoudiniEngineUnity::HEU_Parameters::get_ShowParameters() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_Parameters*>::get(), "get_ShowParameters",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void HoudiniEngineUnity::HEU_Parameters::set_ShowParameters(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_Parameters*>::get(), "set_ShowParameters", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool HoudiniEngineUnity::HEU_Parameters::get_RecacheUI() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_Parameters*>::get(), "get_RecacheUI",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void HoudiniEngineUnity::HEU_Parameters::set_RecacheUI(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_Parameters*>::get(), "set_RecacheUI", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void HoudiniEngineUnity::HEU_Parameters::CleanUp() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_Parameters*>::get(), "CleanUp",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool HoudiniEngineUnity::HEU_Parameters::Initialize(::HoudiniEngineUnity::HEU_SessionBase* session, int32_t nodeID, ByRef<::HoudiniEngineUnity::HAPI_NodeInfo> nodeInfo,
                                                           ::System::Collections::Generic::Dictionary_2<::StringW, ::HoudiniEngineUnity::HEU_ParameterData*>* previousParamFolders,
                                                           ::System::Collections::Generic::Dictionary_2<::StringW, ::HoudiniEngineUnity::HEU_InputNode*>* previousParamInputNodes,
                                                           ::HoudiniEngineUnity::HEU_HoudiniAsset* parentAsset) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_Parameters*>::get(), "Initialize", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::HoudiniEngineUnity::HAPI_NodeInfo>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Dictionary_2<::StringW, ::HoudiniEngineUnity::HEU_ParameterData*>*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Dictionary_2<::StringW, ::HoudiniEngineUnity::HEU_InputNode*>*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, session, nodeID, nodeInfo, previousParamFolders, previousParamInputNodes, parentAsset);
}
inline void HoudiniEngineUnity::HEU_Parameters::SetupRampParameter(::HoudiniEngineUnity::HEU_ParameterData* rampParameter) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_Parameters*>::get(), "SetupRampParameter", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_ParameterData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, rampParameter);
}
inline ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_ParameterData*>* HoudiniEngineUnity::HEU_Parameters::GetParameters() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_Parameters*>::get(), "GetParameters",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_ParameterData*>*, false>(this, ___internal_method);
}
inline ::HoudiniEngineUnity::HEU_ParameterData* HoudiniEngineUnity::HEU_Parameters::GetParameter(int32_t listIndex) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_Parameters*>::get(), "GetParameter", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::HoudiniEngineUnity::HEU_ParameterData*, false>(this, ___internal_method, listIndex);
}
inline ::HoudiniEngineUnity::HEU_ParameterData* HoudiniEngineUnity::HEU_Parameters::GetParameter(::StringW name) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_Parameters*>::get(), "GetParameter", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::HoudiniEngineUnity::HEU_ParameterData*, false>(this, ___internal_method, name);
}
inline ::HoudiniEngineUnity::HEU_ParameterData* HoudiniEngineUnity::HEU_Parameters::GetParameterWithParmID(int32_t parmID) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_Parameters*>::get(), "GetParameterWithParmID",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::HoudiniEngineUnity::HEU_ParameterData*, false>(this, ___internal_method, parmID);
}
inline void HoudiniEngineUnity::HEU_Parameters::RemoveParameter(int32_t listIndex) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_Parameters*>::get(), "RemoveParameter", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, listIndex);
}
inline int32_t HoudiniEngineUnity::HEU_Parameters::GetChosenIndexFromChoiceList(::HoudiniEngineUnity::HEU_ParameterData* inChoiceParameter) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_Parameters*>::get(), "GetChosenIndexFromChoiceList", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_ParameterData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, inChoiceParameter);
}
inline ::StringW HoudiniEngineUnity::HEU_Parameters::GetStringFromParameter(::StringW paramName) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_Parameters*>::get(), "GetStringFromParameter",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, paramName);
}
inline void HoudiniEngineUnity::HEU_Parameters::SetStringToParameter(::StringW paramName, ::StringW value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_Parameters*>::get(), "SetStringToParameter", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, paramName, value);
}
inline bool HoudiniEngineUnity::HEU_Parameters::HaveParametersChanged() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_Parameters*>::get(),
                                                                             "HaveParametersChanged", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
/// @param bDoCheck: bool (default: true)
/// @param bForceUploadInputs: bool (default: false)
inline bool HoudiniEngineUnity::HEU_Parameters::UploadValuesToHoudini(::HoudiniEngineUnity::HEU_SessionBase* session, ::HoudiniEngineUnity::HEU_HoudiniAsset* parentAsset, bool bDoCheck,
                                                                      bool bForceUploadInputs) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_Parameters*>::get(), "UploadValuesToHoudini", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, session, parentAsset, bDoCheck, bForceUploadInputs);
}
inline void HoudiniEngineUnity::HEU_Parameters::InsertInstanceToMultiParm(int32_t unityParamIndex, int32_t instanceIndex, int32_t numInstancesToAdd) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_Parameters*>::get(), "InsertInstanceToMultiParm", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, unityParamIndex, instanceIndex, numInstancesToAdd);
}
inline void HoudiniEngineUnity::HEU_Parameters::RemoveInstancesFromMultiParm(int32_t unityParamIndex, int32_t instanceIndex, int32_t numInstancesToRemove) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_Parameters*>::get(), "RemoveInstancesFromMultiParm", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, unityParamIndex, instanceIndex, numInstancesToRemove);
}
inline void HoudiniEngineUnity::HEU_Parameters::ClearInstancesFromMultiParm(int32_t unityParamIndex) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_Parameters*>::get(), "ClearInstancesFromMultiParm",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, unityParamIndex);
}
inline bool HoudiniEngineUnity::HEU_Parameters::HasModifiersPending() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_Parameters*>::get(),
                                                                             "HasModifiersPending", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void HoudiniEngineUnity::HEU_Parameters::ProcessModifiers(::HoudiniEngineUnity::HEU_SessionBase* session) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_Parameters*>::get(), "ProcessModifiers", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, session);
}
inline void HoudiniEngineUnity::HEU_Parameters::GetParameterDataForUIRestore(::System::Collections::Generic::Dictionary_2<::StringW, ::HoudiniEngineUnity::HEU_ParameterData*>* folderParams,
                                                                             ::System::Collections::Generic::Dictionary_2<::StringW, ::HoudiniEngineUnity::HEU_InputNode*>* inputNodeParams) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_Parameters*>::get(), "GetParameterDataForUIRestore", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Dictionary_2<::StringW, ::HoudiniEngineUnity::HEU_ParameterData*>*>::get(),
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Dictionary_2<::StringW, ::HoudiniEngineUnity::HEU_InputNode*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, folderParams, inputNodeParams);
}
inline void HoudiniEngineUnity::HEU_Parameters::GetInputNodeConnectionObjects(::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* inputNodeObjects) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_Parameters*>::get(), "GetInputNodeConnectionObjects", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, inputNodeObjects);
}
inline void HoudiniEngineUnity::HEU_Parameters::DownloadPresetData(::HoudiniEngineUnity::HEU_SessionBase* session) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_Parameters*>::get(), "DownloadPresetData", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, session);
}
inline void HoudiniEngineUnity::HEU_Parameters::UploadPresetData(::HoudiniEngineUnity::HEU_SessionBase* session) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_Parameters*>::get(), "UploadPresetData", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, session);
}
inline void HoudiniEngineUnity::HEU_Parameters::DownloadAsDefaultPresetData(::HoudiniEngineUnity::HEU_SessionBase* session) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_Parameters*>::get(), "DownloadAsDefaultPresetData", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, session);
}
inline void HoudiniEngineUnity::HEU_Parameters::UploadParameterInputs(::HoudiniEngineUnity::HEU_SessionBase* session, ::HoudiniEngineUnity::HEU_HoudiniAsset* parentAsset, bool bForceUpdate) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_Parameters*>::get(), "UploadParameterInputs", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, session, parentAsset, bForceUpdate);
}
inline void HoudiniEngineUnity::HEU_Parameters::UpdateTransformParameters(::HoudiniEngineUnity::HEU_SessionBase* session, ByRef<::HoudiniEngineUnity::HAPI_TransformEuler> HAPITransform) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_Parameters*>::get(), "UpdateTransformParameters", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::HoudiniEngineUnity::HAPI_TransformEuler>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, session, HAPITransform);
}
inline void HoudiniEngineUnity::HEU_Parameters::SyncParameterFromHoudini(::HoudiniEngineUnity::HEU_SessionBase* session, ::StringW parameterName) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_Parameters*>::get(), "SyncParameterFromHoudini", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, session, parameterName);
}
inline void HoudiniEngineUnity::HEU_Parameters::SyncInternalParametersForUndoCompare(::HoudiniEngineUnity::HEU_SessionBase* session) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_Parameters*>::get(), "SyncInternalParametersForUndoCompare", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, session);
}
inline void HoudiniEngineUnity::HEU_Parameters::ResetAllToDefault(::HoudiniEngineUnity::HEU_SessionBase* session) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_Parameters*>::get(), "ResetAllToDefault", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, session);
}
inline bool HoudiniEngineUnity::HEU_Parameters::IsEquivalentTo(::HoudiniEngineUnity::HEU_Parameters* other) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_Parameters*>::get(), "IsEquivalentTo", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_Parameters*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, other);
}
inline ::HoudiniEngineUnity::HEU_Parameters* HoudiniEngineUnity::HEU_Parameters::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::HoudiniEngineUnity::HEU_Parameters*>());
}
inline void HoudiniEngineUnity::HEU_Parameters::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_Parameters*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::HoudiniEngineUnity::HEU_Parameters::HEU_Parameters() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
