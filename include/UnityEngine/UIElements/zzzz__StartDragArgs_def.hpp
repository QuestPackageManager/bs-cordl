#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(StartDragArgs)
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System::Collections {
class Hashtable;
}
namespace System {
class Object;
}
namespace UnityEngine {
class Object;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class StartDragArgs;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::StartDragArgs);
// Type: UnityEngine.UIElements::StartDragArgs
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6957))
// CS Name: ::UnityEngine.UIElements::StartDragArgs*
class CORDL_TYPE StartDragArgs : public ::System::Object {
public:
  // Declarations
  /// @brief Field <title>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__title_k__BackingField, put = __cordl_internal_set__title_k__BackingField))::StringW _title_k__BackingField;

  /// @brief Field <userData>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__userData_k__BackingField, put = __cordl_internal_set__userData_k__BackingField))::System::Object* _userData_k__BackingField;

  /// @brief Field m_GenericData, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_GenericData, put = __cordl_internal_set_m_GenericData))::System::Collections::Hashtable* m_GenericData;

  /// @brief Field <unityObjectReferences>k__BackingField, offset 0x28, size 0x8
  __declspec(property(
      get = __cordl_internal_get__unityObjectReferences_k__BackingField,
      put = __cordl_internal_set__unityObjectReferences_k__BackingField))::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::Object>>* _unityObjectReferences_k__BackingField;

  __declspec(property(get = get_userData))::System::Object* userData;

  constexpr ::StringW& __cordl_internal_get__title_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__title_k__BackingField() const;

  constexpr void __cordl_internal_set__title_k__BackingField(::StringW value);

  constexpr ::System::Object*& __cordl_internal_get__userData_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __cordl_internal_get__userData_k__BackingField() const;

  constexpr void __cordl_internal_set__userData_k__BackingField(::System::Object* value);

  constexpr ::System::Collections::Hashtable*& __cordl_internal_get_m_GenericData();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Hashtable*> const& __cordl_internal_get_m_GenericData() const;

  constexpr void __cordl_internal_set_m_GenericData(::System::Collections::Hashtable* value);

  constexpr ::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::Object>>*& __cordl_internal_get__unityObjectReferences_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::Object>>*> const&
  __cordl_internal_get__unityObjectReferences_k__BackingField() const;

  constexpr void __cordl_internal_set__unityObjectReferences_k__BackingField(::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::Object>>* value);

  /// @brief Method get_userData, addr 0x2e09984, size 0x8, virtual false, abstract: false, final false
  inline ::System::Object* get_userData();

  static inline ::UnityEngine::UIElements::StartDragArgs* New_ctor(::StringW title, ::System::Object* userData);

  /// @brief Method .ctor, addr 0x2e098cc, size 0x80, virtual false, abstract: false, final false
  inline void _ctor(::StringW title, ::System::Object* userData);

  // Ctor Parameters [CppParam { name: "", ty: "StartDragArgs", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  StartDragArgs(StartDragArgs&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "StartDragArgs", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  StartDragArgs(StartDragArgs const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr StartDragArgs();

public:
  /// @brief Field <title>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::StringW ____title_k__BackingField;

  /// @brief Field <userData>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::System::Object* ____userData_k__BackingField;

  /// @brief Field m_GenericData, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Hashtable* ___m_GenericData;

  /// @brief Field <unityObjectReferences>k__BackingField, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::Object>>* ____unityObjectReferences_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::StartDragArgs, 0x30>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::StartDragArgs, ____title_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::StartDragArgs, ____userData_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::StartDragArgs, ___m_GenericData) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::StartDragArgs, ____unityObjectReferences_k__BackingField) == 0x28, "Offset mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::StartDragArgs);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::StartDragArgs*, "UnityEngine.UIElements", "StartDragArgs");
