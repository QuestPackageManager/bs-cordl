#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_EditorUtility_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_EditorUtility_def.hpp"
#include "UnityEngine/zzzz__Component_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_HoudiniAssetRoot_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::HoudiniEngineUnity::__HEU_EditorUtility__HEU_ReplacePrefabOptions::__HEU_EditorUtility__HEU_ReplacePrefabOptions(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::HoudiniEngineUnity::__HEU_EditorUtility__HEU_ReplacePrefabOptions::__HEU_EditorUtility__HEU_ReplacePrefabOptions() {}
constexpr ::HoudiniEngineUnity::__HEU_EditorUtility__HEU_ReplacePrefabOptions HoudiniEngineUnity::__HEU_EditorUtility__HEU_ReplacePrefabOptions::Default{ static_cast<int32_t>(0x0) };
constexpr ::HoudiniEngineUnity::__HEU_EditorUtility__HEU_ReplacePrefabOptions HoudiniEngineUnity::__HEU_EditorUtility__HEU_ReplacePrefabOptions::ConnectToPrefab{ static_cast<int32_t>(0x1) };
constexpr ::HoudiniEngineUnity::__HEU_EditorUtility__HEU_ReplacePrefabOptions HoudiniEngineUnity::__HEU_EditorUtility__HEU_ReplacePrefabOptions::ReplaceNameBased{ static_cast<int32_t>(0x2) };
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_EditorUtility.MarkSceneDirty
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::HoudiniEngineUnity::HEU_EditorUtility::MarkSceneDirty)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x21b1d94;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_EditorUtility*>::get(),
                                                                               "MarkSceneDirty", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_EditorUtility.SelectObject
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::GameObject*)>(&::HoudiniEngineUnity::HEU_EditorUtility::SelectObject)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x21b1d98;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_EditorUtility*>::get(), "SelectObject", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_EditorUtility.SelectObjects
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ArrayW<::UnityEngine::GameObject*, ::Array<::UnityEngine::GameObject*>*>)>(
    &::HoudiniEngineUnity::HEU_EditorUtility::SelectObjects)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x21b1d9c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_EditorUtility*>::get(), "SelectObjects", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::GameObject*, ::Array<::UnityEngine::GameObject*>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_EditorUtility.GetSelectedObjectsMeanPosition
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (*)()>(&::HoudiniEngineUnity::HEU_EditorUtility::GetSelectedObjectsMeanPosition)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x21b1da0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_EditorUtility*>::get(),
                                                                               "GetSelectedObjectsMeanPosition", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_EditorUtility.GetSelectedObjectsMeanTransform
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Matrix4x4 (*)()>(&::HoudiniEngineUnity::HEU_EditorUtility::GetSelectedObjectsMeanTransform)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x21b1de4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_EditorUtility*>::get(),
                                                                               "GetSelectedObjectsMeanTransform", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_EditorUtility.SaveAsPrefabAsset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::GameObject* (*)(::StringW, ::UnityEngine::GameObject*)>(
    &::HoudiniEngineUnity::HEU_EditorUtility::SaveAsPrefabAsset)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x21b1e3c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_EditorUtility*>::get(), "SaveAsPrefabAsset", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_EditorUtility.PrefabIsAddedComponentOverride
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::UnityEngine::Component*)>(&::HoudiniEngineUnity::HEU_EditorUtility::PrefabIsAddedComponentOverride)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21b1e88;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_EditorUtility*>::get(), "PrefabIsAddedComponentOverride",
                                    std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Component*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_EditorUtility.IsEditorPlaying
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::HoudiniEngineUnity::HEU_EditorUtility::IsEditorPlaying)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21b1e90;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_EditorUtility*>::get(),
                                                                               "IsEditorPlaying", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_EditorUtility.ReplacePrefab
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::UnityEngine::GameObject* (*)(::UnityEngine::GameObject*, ::UnityEngine::Object*, ::HoudiniEngineUnity::__HEU_EditorUtility__HEU_ReplacePrefabOptions)>(
        &::HoudiniEngineUnity::HEU_EditorUtility::ReplacePrefab)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x21b1e98;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_EditorUtility*>::get(), "ReplacePrefab", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Object*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::__HEU_EditorUtility__HEU_ReplacePrefabOptions>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_EditorUtility.IsPrefabInstance
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::UnityEngine::GameObject*)>(&::HoudiniEngineUnity::HEU_EditorUtility::IsPrefabInstance)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x21b1ee4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_EditorUtility*>::get(), "IsPrefabInstance", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_EditorUtility.IsPrefabAsset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::UnityEngine::GameObject*)>(&::HoudiniEngineUnity::HEU_EditorUtility::IsPrefabAsset)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x21b1f30;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_EditorUtility*>::get(), "IsPrefabAsset", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_EditorUtility.IsEditingInPrefabMode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::UnityEngine::GameObject*)>(&::HoudiniEngineUnity::HEU_EditorUtility::IsEditingInPrefabMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21b1f7c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_EditorUtility*>::get(), "IsEditingInPrefabMode", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_EditorUtility.IsDisconnectedPrefabInstance
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::UnityEngine::GameObject*)>(&::HoudiniEngineUnity::HEU_EditorUtility::IsDisconnectedPrefabInstance)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x21b1f84;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_EditorUtility*>::get(), "IsDisconnectedPrefabInstance",
                                    std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_EditorUtility.GetPrefabAsset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Object* (*)(::UnityEngine::GameObject*)>(&::HoudiniEngineUnity::HEU_EditorUtility::GetPrefabAsset)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x21b1fd0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_EditorUtility*>::get(), "GetPrefabAsset", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_EditorUtility.GetPrefabAssetPath
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::UnityEngine::Object*)>(&::HoudiniEngineUnity::HEU_EditorUtility::GetPrefabAssetPath)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x21b201c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_EditorUtility*>::get(), "GetPrefabAssetPath", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_EditorUtility.DisconnectPrefabInstance
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::GameObject*)>(&::HoudiniEngineUnity::HEU_EditorUtility::DisconnectPrefabInstance)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x21b2068;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_EditorUtility*>::get(), "DisconnectPrefabInstance", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_EditorUtility.InstantiatePrefab
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Object* (*)(::UnityEngine::GameObject*)>(
    &::HoudiniEngineUnity::HEU_EditorUtility::InstantiatePrefab)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x21b20ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_EditorUtility*>::get(), "InstantiatePrefab", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_EditorUtility.InstantiateGameObject
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::GameObject* (*)(::UnityEngine::GameObject*, ::UnityEngine::Transform*, bool, bool)>(
    &::HoudiniEngineUnity::HEU_EditorUtility::InstantiateGameObject)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x21b20f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_EditorUtility*>::get(), "InstantiateGameObject", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_EditorUtility.UndoRecordObject
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Object*, ::StringW)>(&::HoudiniEngineUnity::HEU_EditorUtility::UndoRecordObject)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x21b217c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_EditorUtility*>::get(), "UndoRecordObject", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Object*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_EditorUtility.UndoCollapseCurrentGroup
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::HoudiniEngineUnity::HEU_EditorUtility::UndoCollapseCurrentGroup)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x21b2180;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_EditorUtility*>::get(),
                                                                               "UndoCollapseCurrentGroup", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_EditorUtility.CollectDependencies
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityEngine::Object*, ::Array<::UnityEngine::Object*>*> (*)(::UnityEngine::Object*)>(
    &::HoudiniEngineUnity::HEU_EditorUtility::CollectDependencies)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x21b2184;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_EditorUtility*>::get(), "CollectDependencies", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_EditorUtility.IsPersistant
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::UnityEngine::Object*)>(&::HoudiniEngineUnity::HEU_EditorUtility::IsPersistant)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x21b21d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_EditorUtility*>::get(), "IsPersistant", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_EditorUtility.GetUniqueNameForSibling
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::UnityEngine::Transform*, ::StringW)>(
    &::HoudiniEngineUnity::HEU_EditorUtility::GetUniqueNameForSibling)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x21b221c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_EditorUtility*>::get(), "GetUniqueNameForSibling", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_EditorUtility.DisplayProgressBar
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW, ::StringW, float_t)>(&::HoudiniEngineUnity::HEU_EditorUtility::DisplayProgressBar)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x21b2268;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_EditorUtility*>::get(), "DisplayProgressBar", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_EditorUtility.ClearProgressBar
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::HoudiniEngineUnity::HEU_EditorUtility::ClearProgressBar)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x21b22ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_EditorUtility*>::get(),
                                                                               "ClearProgressBar", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_EditorUtility.IsEditorNotInPlayModeAndNotGoingToPlayMode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::HoudiniEngineUnity::HEU_EditorUtility::IsEditorNotInPlayModeAndNotGoingToPlayMode)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x21b22f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_EditorUtility*>::get(),
                                                                               "IsEditorNotInPlayModeAndNotGoingToPlayMode", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_EditorUtility.DisplayDialog
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW, ::StringW, ::StringW, ::StringW)>(&::HoudiniEngineUnity::HEU_EditorUtility::DisplayDialog)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x21b2320;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_EditorUtility*>::get(), "DisplayDialog", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_EditorUtility.DisplayErrorDialog
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW, ::StringW, ::StringW, ::StringW)>(&::HoudiniEngineUnity::HEU_EditorUtility::DisplayErrorDialog)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x21b238c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_EditorUtility*>::get(), "DisplayErrorDialog", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_EditorUtility.RevealInFinder
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW)>(&::HoudiniEngineUnity::HEU_EditorUtility::RevealInFinder)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x21b2410;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_EditorUtility*>::get(), "RevealInFinder", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_EditorUtility.SetObjectDirtyForEditorUpdate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Object*)>(&::HoudiniEngineUnity::HEU_EditorUtility::SetObjectDirtyForEditorUpdate)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x21b2414;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_EditorUtility*>::get(), "SetObjectDirtyForEditorUpdate",
                                    std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_EditorUtility.SetStatic
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::GameObject*, bool, bool)>(&::HoudiniEngineUnity::HEU_EditorUtility::SetStatic)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x21b2418;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_EditorUtility*>::get(), "SetStatic", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_EditorUtility.SetIsHidden
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::GameObject*, bool, bool)>(&::HoudiniEngineUnity::HEU_EditorUtility::SetIsHidden)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x21b241c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_EditorUtility*>::get(), "SetIsHidden", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_EditorUtility.GetSelectedObjects
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityEngine::GameObject*, ::Array<::UnityEngine::GameObject*>*> (*)()>(
    &::HoudiniEngineUnity::HEU_EditorUtility::GetSelectedObjects)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21b2420;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_EditorUtility*>::get(),
                                                                               "GetSelectedObjects", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_EditorUtility.GetSelectedAssetRoots
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::HoudiniEngineUnity::HEU_HoudiniAssetRoot*, ::Array<::HoudiniEngineUnity::HEU_HoudiniAssetRoot*>*> (*)()>(
    &::HoudiniEngineUnity::HEU_EditorUtility::GetSelectedAssetRoots)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x21b2428;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_EditorUtility*>::get(),
                                                                               "GetSelectedAssetRoots", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_EditorUtility.GetAllAssetRoots
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::HoudiniEngineUnity::HEU_HoudiniAssetRoot*, ::Array<::HoudiniEngineUnity::HEU_HoudiniAssetRoot*>*> (*)()>(
    &::HoudiniEngineUnity::HEU_EditorUtility::GetAllAssetRoots)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x21b24b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_EditorUtility*>::get(),
                                                                               "GetAllAssetRoots", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_EditorUtility.CookSelected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::HoudiniEngineUnity::HEU_EditorUtility::CookSelected)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x21b2514;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_EditorUtility*>::get(), "CookSelected",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_EditorUtility.CookAll
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::HoudiniEngineUnity::HEU_EditorUtility::CookAll)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x21b2600;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_EditorUtility*>::get(), "CookAll",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_EditorUtility.CookAssets
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::ArrayW<::HoudiniEngineUnity::HEU_HoudiniAssetRoot*, ::Array<::HoudiniEngineUnity::HEU_HoudiniAssetRoot*>*>)>(&::HoudiniEngineUnity::HEU_EditorUtility::CookAssets)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x21b2524;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_EditorUtility*>::get(), "CookAssets", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::HoudiniEngineUnity::HEU_HoudiniAssetRoot*, ::Array<::HoudiniEngineUnity::HEU_HoudiniAssetRoot*>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_EditorUtility.RebuildSelected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::HoudiniEngineUnity::HEU_EditorUtility::RebuildSelected)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x21b2610;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_EditorUtility*>::get(),
                                                                               "RebuildSelected", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_EditorUtility.RebuildAll
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::HoudiniEngineUnity::HEU_EditorUtility::RebuildAll)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x21b26f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_EditorUtility*>::get(), "RebuildAll",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_EditorUtility.RebuildAssets
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::ArrayW<::HoudiniEngineUnity::HEU_HoudiniAssetRoot*, ::Array<::HoudiniEngineUnity::HEU_HoudiniAssetRoot*>*>)>(&::HoudiniEngineUnity::HEU_EditorUtility::RebuildAssets)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x21b2620;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_EditorUtility*>::get(), "RebuildAssets", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::HoudiniEngineUnity::HEU_HoudiniAssetRoot*, ::Array<::HoudiniEngineUnity::HEU_HoudiniAssetRoot*>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_EditorUtility.BakeAndReplaceSelectedInScene
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::HoudiniEngineUnity::HEU_EditorUtility::BakeAndReplaceSelectedInScene)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x21b2700;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_EditorUtility*>::get(),
                                                                               "BakeAndReplaceSelectedInScene", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_EditorUtility.BakeAndReplaceAllInScene
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::HoudiniEngineUnity::HEU_EditorUtility::BakeAndReplaceAllInScene)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x21b27dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_EditorUtility*>::get(),
                                                                               "BakeAndReplaceAllInScene", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_EditorUtility.BakeAndReplaceAssets
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(
    ::ArrayW<::HoudiniEngineUnity::HEU_HoudiniAssetRoot*, ::Array<::HoudiniEngineUnity::HEU_HoudiniAssetRoot*>*>)>(&::HoudiniEngineUnity::HEU_EditorUtility::BakeAndReplaceAssets)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x21b2710;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_EditorUtility*>::get(), "BakeAndReplaceAssets", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::HoudiniEngineUnity::HEU_HoudiniAssetRoot*, ::Array<::HoudiniEngineUnity::HEU_HoudiniAssetRoot*>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_EditorUtility.ExportSelectedAssetsToGeoFiles
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::HoudiniEngineUnity::HEU_EditorUtility::ExportSelectedAssetsToGeoFiles)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x21b27ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_EditorUtility*>::get(),
                                                                               "ExportSelectedAssetsToGeoFiles", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_EditorUtility.ExportAllAssetsToGeoFiles
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::HoudiniEngineUnity::HEU_EditorUtility::ExportAllAssetsToGeoFiles)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x21b2f08;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_EditorUtility*>::get(),
                                                                               "ExportAllAssetsToGeoFiles", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_EditorUtility.ExportAssetsToGeoFiles
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(
    ::ArrayW<::HoudiniEngineUnity::HEU_HoudiniAssetRoot*, ::Array<::HoudiniEngineUnity::HEU_HoudiniAssetRoot*>*>)>(&::HoudiniEngineUnity::HEU_EditorUtility::ExportAssetsToGeoFiles)> {
  constexpr static std::size_t size = 0x70c;
  constexpr static std::size_t addrs = 0x21b27fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_EditorUtility*>::get(), "ExportAssetsToGeoFiles", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::HoudiniEngineUnity::HEU_HoudiniAssetRoot*, ::Array<::HoudiniEngineUnity::HEU_HoudiniAssetRoot*>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_EditorUtility.EditorSaveFolderPanel
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW, ::StringW, ::StringW)>(&::HoudiniEngineUnity::HEU_EditorUtility::EditorSaveFolderPanel)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x21b2f18;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_EditorUtility*>::get(), "EditorSaveFolderPanel", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_EditorUtility.QuerySelectedMeshTopology
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::HoudiniEngineUnity::HEU_EditorUtility::QuerySelectedMeshTopology)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x21b2f64;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_EditorUtility*>::get(),
                                                                               "QuerySelectedMeshTopology", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_EditorUtility.GetObjectParentFolder
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::UnityEngine::GameObject*, ::System::Collections::Generic::HashSet_1<::UnityEngine::Material*>*)>(
    &::HoudiniEngineUnity::HEU_EditorUtility::GetObjectParentFolder)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x21b2f68;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_EditorUtility*>::get(), "GetObjectParentFolder", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::HashSet_1<::UnityEngine::Material*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_EditorUtility.GetObjectParentFolderHelper
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(int32_t)>(&::HoudiniEngineUnity::HEU_EditorUtility::GetObjectParentFolderHelper)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x21b2fa8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_EditorUtility*>::get(), "GetObjectParentFolderHelper",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_EditorUtility.RepaintScene
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::HoudiniEngineUnity::HEU_EditorUtility::RepaintScene)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x21b2fe8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_EditorUtility*>::get(), "RepaintScene",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_EditorUtility.SetTextureToNormalMap
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW)>(&::HoudiniEngineUnity::HEU_EditorUtility::SetTextureToNormalMap)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x21b2fec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_EditorUtility*>::get(), "SetTextureToNormalMap",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_EditorUtility.ReleasedMouse
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::HoudiniEngineUnity::HEU_EditorUtility::ReleasedMouse)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21b2ff0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_EditorUtility*>::get(), "ReleasedMouse",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
inline void HoudiniEngineUnity::HEU_EditorUtility::MarkSceneDirty() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_EditorUtility*>::get(), "MarkSceneDirty",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
inline void HoudiniEngineUnity::HEU_EditorUtility::SelectObject(::UnityEngine::GameObject* gameObject) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_EditorUtility*>::get(), "SelectObject", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, gameObject);
}
inline void HoudiniEngineUnity::HEU_EditorUtility::SelectObjects(::ArrayW<::UnityEngine::GameObject*, ::Array<::UnityEngine::GameObject*>*> gameObjects) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_EditorUtility*>::get(), "SelectObjects", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::GameObject*, ::Array<::UnityEngine::GameObject*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, gameObjects);
}
inline ::UnityEngine::Vector3 HoudiniEngineUnity::HEU_EditorUtility::GetSelectedObjectsMeanPosition() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_EditorUtility*>::get(),
                                                                             "GetSelectedObjectsMeanPosition", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3, false>(nullptr, ___internal_method);
}
inline ::UnityEngine::Matrix4x4 HoudiniEngineUnity::HEU_EditorUtility::GetSelectedObjectsMeanTransform() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_EditorUtility*>::get(),
                                                                             "GetSelectedObjectsMeanTransform", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Matrix4x4, false>(nullptr, ___internal_method);
}
inline ::UnityEngine::GameObject* HoudiniEngineUnity::HEU_EditorUtility::SaveAsPrefabAsset(::StringW path, ::UnityEngine::GameObject* go) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_EditorUtility*>::get(), "SaveAsPrefabAsset", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::GameObject*, false>(nullptr, ___internal_method, path, go);
}
inline bool HoudiniEngineUnity::HEU_EditorUtility::PrefabIsAddedComponentOverride(::UnityEngine::Component* comp) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_EditorUtility*>::get(), "PrefabIsAddedComponentOverride",
                                  std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Component*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, comp);
}
inline bool HoudiniEngineUnity::HEU_EditorUtility::IsEditorPlaying() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_EditorUtility*>::get(), "IsEditorPlaying",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
inline ::UnityEngine::GameObject* HoudiniEngineUnity::HEU_EditorUtility::ReplacePrefab(::UnityEngine::GameObject* go, ::UnityEngine::Object* targetPrefab,
                                                                                       ::HoudiniEngineUnity::__HEU_EditorUtility__HEU_ReplacePrefabOptions heuOptions) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_EditorUtility*>::get(), "ReplacePrefab", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Object*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::__HEU_EditorUtility__HEU_ReplacePrefabOptions>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::GameObject*, false>(nullptr, ___internal_method, go, targetPrefab, heuOptions);
}
inline bool HoudiniEngineUnity::HEU_EditorUtility::IsPrefabInstance(::UnityEngine::GameObject* go) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_EditorUtility*>::get(), "IsPrefabInstance", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, go);
}
inline bool HoudiniEngineUnity::HEU_EditorUtility::IsPrefabAsset(::UnityEngine::GameObject* go) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_EditorUtility*>::get(), "IsPrefabAsset", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, go);
}
inline bool HoudiniEngineUnity::HEU_EditorUtility::IsEditingInPrefabMode(::UnityEngine::GameObject* obj) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_EditorUtility*>::get(), "IsEditingInPrefabMode", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, obj);
}
inline bool HoudiniEngineUnity::HEU_EditorUtility::IsDisconnectedPrefabInstance(::UnityEngine::GameObject* go) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_EditorUtility*>::get(), "IsDisconnectedPrefabInstance", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, go);
}
inline ::UnityEngine::Object* HoudiniEngineUnity::HEU_EditorUtility::GetPrefabAsset(::UnityEngine::GameObject* go) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_EditorUtility*>::get(), "GetPrefabAsset", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Object*, false>(nullptr, ___internal_method, go);
}
inline ::StringW HoudiniEngineUnity::HEU_EditorUtility::GetPrefabAssetPath(::UnityEngine::Object* obj) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_EditorUtility*>::get(), "GetPrefabAssetPath",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, obj);
}
inline void HoudiniEngineUnity::HEU_EditorUtility::DisconnectPrefabInstance(::UnityEngine::GameObject* instance) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_EditorUtility*>::get(), "DisconnectPrefabInstance", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, instance);
}
inline ::UnityEngine::Object* HoudiniEngineUnity::HEU_EditorUtility::InstantiatePrefab(::UnityEngine::GameObject* prefabOriginal) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_EditorUtility*>::get(), "InstantiatePrefab", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Object*, false>(nullptr, ___internal_method, prefabOriginal);
}
inline ::UnityEngine::GameObject* HoudiniEngineUnity::HEU_EditorUtility::InstantiateGameObject(::UnityEngine::GameObject* sourceGameObject, ::UnityEngine::Transform* parentTransform,
                                                                                               bool instantiateInWorldSpace, bool bRegisterUndo) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_EditorUtility*>::get(), "InstantiateGameObject", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::GameObject*, false>(nullptr, ___internal_method, sourceGameObject, parentTransform, instantiateInWorldSpace, bRegisterUndo);
}
template <typename T> inline ::UnityEngine::Component* HoudiniEngineUnity::HEU_EditorUtility::AddComponent(::UnityEngine::GameObject* target, bool bRegisterUndo) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_EditorUtility*>::get(), "AddComponent",
                                               std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Component*, false>(nullptr, ___internal_method, target, bRegisterUndo);
}
inline void HoudiniEngineUnity::HEU_EditorUtility::UndoRecordObject(::UnityEngine::Object* objectToUndo, ::StringW name) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_EditorUtility*>::get(), "UndoRecordObject", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Object*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, objectToUndo, name);
}
inline void HoudiniEngineUnity::HEU_EditorUtility::UndoCollapseCurrentGroup() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_EditorUtility*>::get(),
                                                                             "UndoCollapseCurrentGroup", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
inline ::ArrayW<::UnityEngine::Object*, ::Array<::UnityEngine::Object*>*> HoudiniEngineUnity::HEU_EditorUtility::CollectDependencies(::UnityEngine::Object* obj) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_EditorUtility*>::get(), "CollectDependencies",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::Object*, ::Array<::UnityEngine::Object*>*>, false>(nullptr, ___internal_method, obj);
}
inline bool HoudiniEngineUnity::HEU_EditorUtility::IsPersistant(::UnityEngine::Object* obj) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_EditorUtility*>::get(), "IsPersistant", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, obj);
}
inline ::StringW HoudiniEngineUnity::HEU_EditorUtility::GetUniqueNameForSibling(::UnityEngine::Transform* parentTransform, ::StringW name) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_EditorUtility*>::get(), "GetUniqueNameForSibling", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, parentTransform, name);
}
inline void HoudiniEngineUnity::HEU_EditorUtility::DisplayProgressBar(::StringW title, ::StringW info, float_t progress) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_EditorUtility*>::get(), "DisplayProgressBar", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, title, info, progress);
}
inline void HoudiniEngineUnity::HEU_EditorUtility::ClearProgressBar() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_EditorUtility*>::get(),
                                                                             "ClearProgressBar", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
inline bool HoudiniEngineUnity::HEU_EditorUtility::IsEditorNotInPlayModeAndNotGoingToPlayMode() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_EditorUtility*>::get(),
                                                                             "IsEditorNotInPlayModeAndNotGoingToPlayMode", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
/// @param cancel: ::StringW (default: u"")
inline bool HoudiniEngineUnity::HEU_EditorUtility::DisplayDialog(::StringW title, ::StringW message, ::StringW ok, ::StringW cancel) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_EditorUtility*>::get(), "DisplayDialog", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, title, message, ok, cancel);
}
/// @param cancel: ::StringW (default: u"")
inline bool HoudiniEngineUnity::HEU_EditorUtility::DisplayErrorDialog(::StringW title, ::StringW message, ::StringW ok, ::StringW cancel) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_EditorUtility*>::get(), "DisplayErrorDialog", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, title, message, ok, cancel);
}
inline void HoudiniEngineUnity::HEU_EditorUtility::RevealInFinder(::StringW path) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_EditorUtility*>::get(), "RevealInFinder", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, path);
}
inline void HoudiniEngineUnity::HEU_EditorUtility::SetObjectDirtyForEditorUpdate(::UnityEngine::Object* obj) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_EditorUtility*>::get(), "SetObjectDirtyForEditorUpdate",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, obj);
}
inline void HoudiniEngineUnity::HEU_EditorUtility::SetStatic(::UnityEngine::GameObject* go, bool bStatic, bool bIncludeChildren) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_EditorUtility*>::get(), "SetStatic", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, go, bStatic, bIncludeChildren);
}
inline void HoudiniEngineUnity::HEU_EditorUtility::SetIsHidden(::UnityEngine::GameObject* go, bool isHidden, bool bIncludeChildren) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_EditorUtility*>::get(), "SetIsHidden", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, go, isHidden, bIncludeChildren);
}
inline ::ArrayW<::UnityEngine::GameObject*, ::Array<::UnityEngine::GameObject*>*> HoudiniEngineUnity::HEU_EditorUtility::GetSelectedObjects() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_EditorUtility*>::get(),
                                                                             "GetSelectedObjects", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::GameObject*, ::Array<::UnityEngine::GameObject*>*>, false>(nullptr, ___internal_method);
}
inline ::ArrayW<::HoudiniEngineUnity::HEU_HoudiniAssetRoot*, ::Array<::HoudiniEngineUnity::HEU_HoudiniAssetRoot*>*> HoudiniEngineUnity::HEU_EditorUtility::GetSelectedAssetRoots() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_EditorUtility*>::get(),
                                                                             "GetSelectedAssetRoots", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::HoudiniEngineUnity::HEU_HoudiniAssetRoot*, ::Array<::HoudiniEngineUnity::HEU_HoudiniAssetRoot*>*>, false>(nullptr, ___internal_method);
}
inline ::ArrayW<::HoudiniEngineUnity::HEU_HoudiniAssetRoot*, ::Array<::HoudiniEngineUnity::HEU_HoudiniAssetRoot*>*> HoudiniEngineUnity::HEU_EditorUtility::GetAllAssetRoots() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_EditorUtility*>::get(),
                                                                             "GetAllAssetRoots", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::HoudiniEngineUnity::HEU_HoudiniAssetRoot*, ::Array<::HoudiniEngineUnity::HEU_HoudiniAssetRoot*>*>, false>(nullptr, ___internal_method);
}
inline void HoudiniEngineUnity::HEU_EditorUtility::CookSelected() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_EditorUtility*>::get(), "CookSelected",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
inline void HoudiniEngineUnity::HEU_EditorUtility::CookAll() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_EditorUtility*>::get(), "CookAll",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
inline void HoudiniEngineUnity::HEU_EditorUtility::CookAssets(::ArrayW<::HoudiniEngineUnity::HEU_HoudiniAssetRoot*, ::Array<::HoudiniEngineUnity::HEU_HoudiniAssetRoot*>*> rootAssets) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_EditorUtility*>::get(), "CookAssets", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::HoudiniEngineUnity::HEU_HoudiniAssetRoot*, ::Array<::HoudiniEngineUnity::HEU_HoudiniAssetRoot*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, rootAssets);
}
inline void HoudiniEngineUnity::HEU_EditorUtility::RebuildSelected() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_EditorUtility*>::get(), "RebuildSelected",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
inline void HoudiniEngineUnity::HEU_EditorUtility::RebuildAll() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_EditorUtility*>::get(), "RebuildAll",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
inline void HoudiniEngineUnity::HEU_EditorUtility::RebuildAssets(::ArrayW<::HoudiniEngineUnity::HEU_HoudiniAssetRoot*, ::Array<::HoudiniEngineUnity::HEU_HoudiniAssetRoot*>*> rootAssets) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_EditorUtility*>::get(), "RebuildAssets", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::HoudiniEngineUnity::HEU_HoudiniAssetRoot*, ::Array<::HoudiniEngineUnity::HEU_HoudiniAssetRoot*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, rootAssets);
}
inline void HoudiniEngineUnity::HEU_EditorUtility::BakeAndReplaceSelectedInScene() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_EditorUtility*>::get(),
                                                                             "BakeAndReplaceSelectedInScene", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
inline void HoudiniEngineUnity::HEU_EditorUtility::BakeAndReplaceAllInScene() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_EditorUtility*>::get(),
                                                                             "BakeAndReplaceAllInScene", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
inline void HoudiniEngineUnity::HEU_EditorUtility::BakeAndReplaceAssets(::ArrayW<::HoudiniEngineUnity::HEU_HoudiniAssetRoot*, ::Array<::HoudiniEngineUnity::HEU_HoudiniAssetRoot*>*> rootAssets) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_EditorUtility*>::get(), "BakeAndReplaceAssets", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::HoudiniEngineUnity::HEU_HoudiniAssetRoot*, ::Array<::HoudiniEngineUnity::HEU_HoudiniAssetRoot*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, rootAssets);
}
inline void HoudiniEngineUnity::HEU_EditorUtility::ExportSelectedAssetsToGeoFiles() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_EditorUtility*>::get(),
                                                                             "ExportSelectedAssetsToGeoFiles", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
inline void HoudiniEngineUnity::HEU_EditorUtility::ExportAllAssetsToGeoFiles() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_EditorUtility*>::get(),
                                                                             "ExportAllAssetsToGeoFiles", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
inline void HoudiniEngineUnity::HEU_EditorUtility::ExportAssetsToGeoFiles(::ArrayW<::HoudiniEngineUnity::HEU_HoudiniAssetRoot*, ::Array<::HoudiniEngineUnity::HEU_HoudiniAssetRoot*>*> rootAssets) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_EditorUtility*>::get(), "ExportAssetsToGeoFiles", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::HoudiniEngineUnity::HEU_HoudiniAssetRoot*, ::Array<::HoudiniEngineUnity::HEU_HoudiniAssetRoot*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, rootAssets);
}
inline ::StringW HoudiniEngineUnity::HEU_EditorUtility::EditorSaveFolderPanel(::StringW title, ::StringW folder, ::StringW defaultName) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_EditorUtility*>::get(), "EditorSaveFolderPanel", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, title, folder, defaultName);
}
inline void HoudiniEngineUnity::HEU_EditorUtility::QuerySelectedMeshTopology() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_EditorUtility*>::get(),
                                                                             "QuerySelectedMeshTopology", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
inline ::StringW HoudiniEngineUnity::HEU_EditorUtility::GetObjectParentFolder(::UnityEngine::GameObject* parentObject,
                                                                              ::System::Collections::Generic::HashSet_1<::UnityEngine::Material*>* generatedMaterials) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_EditorUtility*>::get(), "GetObjectParentFolder", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::HashSet_1<::UnityEngine::Material*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, parentObject, generatedMaterials);
}
inline ::StringW HoudiniEngineUnity::HEU_EditorUtility::GetObjectParentFolderHelper(int32_t instanceID) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_EditorUtility*>::get(), "GetObjectParentFolderHelper",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, instanceID);
}
inline void HoudiniEngineUnity::HEU_EditorUtility::RepaintScene() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_EditorUtility*>::get(), "RepaintScene",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
inline void HoudiniEngineUnity::HEU_EditorUtility::SetTextureToNormalMap(::StringW filename) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_EditorUtility*>::get(), "SetTextureToNormalMap",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, filename);
}
inline bool HoudiniEngineUnity::HEU_EditorUtility::ReleasedMouse() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_EditorUtility*>::get(), "ReleasedMouse",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::HoudiniEngineUnity::HEU_EditorUtility::HEU_EditorUtility() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
