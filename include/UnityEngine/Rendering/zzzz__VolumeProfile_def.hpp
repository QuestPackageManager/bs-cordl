#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/VolumeProfile.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Rendering/zzzz__VolumeComponent_def.hpp"
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(VolumeProfile)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
template <typename T> class Predicate_1;
}
namespace System {
class Type;
}
namespace UnityEngine::Rendering {
class VolumeComponent;
}
namespace UnityEngine::Rendering {
struct VolumeProfile_DirtyState;
}
namespace UnityEngine::Rendering {
class VolumeProfile___c;
}
// Forward declare root types
namespace UnityEngine::Rendering {
struct VolumeProfile_DirtyState;
}
namespace UnityEngine::Rendering {
class VolumeProfile;
}
namespace UnityEngine::Rendering {
class VolumeProfile___c;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::VolumeProfile_DirtyState);
MARK_REF_T(::UnityEngine::Rendering::VolumeProfile*);
MARK_REF_T(::UnityEngine::Rendering::VolumeProfile___c*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::VolumeProfile_DirtyState, "UnityEngine.Rendering", "VolumeProfile/DirtyState");
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::VolumeProfile*, "UnityEngine.Rendering", "VolumeProfile");
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::VolumeProfile___c*, "UnityEngine.Rendering", "VolumeProfile/<>c");
// [Flags]
// Dependencies
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.VolumeProfile/DirtyState
struct CORDL_TYPE VolumeProfile_DirtyState {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __VolumeProfile_DirtyState_Unwrapped
  enum struct __VolumeProfile_DirtyState_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_DirtyByComponentChange = static_cast<int32_t>(0x1),
    __E_DirtyByProfileReset = static_cast<int32_t>(0x2),
    __E_Other = static_cast<int32_t>(0x4),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __VolumeProfile_DirtyState_Unwrapped() const noexcept {
    return static_cast<__VolumeProfile_DirtyState_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr VolumeProfile_DirtyState();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
  constexpr VolumeProfile_DirtyState(int32_t value__) noexcept;

  /// @brief Field DirtyByComponentChange value: I32(1)
  static ::UnityEngine::Rendering::VolumeProfile_DirtyState const DirtyByComponentChange;

  /// @brief Field DirtyByProfileReset value: I32(2)
  static ::UnityEngine::Rendering::VolumeProfile_DirtyState const DirtyByProfileReset;

  /// @brief Field None value: I32(0)
  static ::UnityEngine::Rendering::VolumeProfile_DirtyState const None;

  /// @brief Field Other value: I32(4)
  static ::UnityEngine::Rendering::VolumeProfile_DirtyState const Other;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9256 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::VolumeProfile_DirtyState, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::VolumeProfile_DirtyState) == 0x4, "Size mismatch!");

} // namespace UnityEngine::Rendering
// [CompilerGenerated]
// Dependencies System.Object
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.VolumeProfile/<>c
class CORDL_TYPE VolumeProfile___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::UnityEngine::Rendering::VolumeProfile___c* __9;

  /// @brief Field <>9__6_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__6_0, put = setStaticF___9__6_0)) ::System::Predicate_1<::UnityW<::UnityEngine::Rendering::VolumeComponent>>* __9__6_0;

  static inline ::UnityEngine::Rendering::VolumeProfile___c* New_ctor();

  /// @brief Method <OnEnable>b__6_0, addr 0x6bed0f4, size 0x60, virtual false, abstract: false, final false
  inline bool _OnEnable_b__6_0(::UnityEngine::Rendering::VolumeComponent* x);

  /// @brief Method .ctor, addr 0x6bed0f0, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::Rendering::VolumeProfile___c* getStaticF___9();

  static inline ::System::Predicate_1<::UnityW<::UnityEngine::Rendering::VolumeComponent>>* getStaticF___9__6_0();

  static inline void setStaticF___9(::UnityEngine::Rendering::VolumeProfile___c* value);

  static inline void setStaticF___9__6_0(::System::Predicate_1<::UnityW<::UnityEngine::Rendering::VolumeComponent>>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr VolumeProfile___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "VolumeProfile___c", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  VolumeProfile___c(VolumeProfile___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "VolumeProfile___c", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  VolumeProfile___c(VolumeProfile___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9257 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Rendering::VolumeProfile___c) == 0x10, "Size mismatch!");

} // namespace UnityEngine::Rendering
// Dependencies UnityEngine.Rendering.VolumeComponent, UnityEngine.Rendering.VolumeProfile::DirtyState, UnityEngine.ScriptableObject
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.VolumeProfile
class CORDL_TYPE VolumeProfile : public ::UnityEngine::ScriptableObject {
public:
  // Declarations
  using DirtyState = ::UnityEngine::Rendering::VolumeProfile_DirtyState;

  using __c = ::UnityEngine::Rendering::VolumeProfile___c;

  /// @brief Field components, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_components,
                      put = __cordl_internal_set_components)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rendering::VolumeComponent>>* components;

  /// @brief Field dirtyState, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_dirtyState, put = __cordl_internal_set_dirtyState)) ::UnityEngine::Rendering::VolumeProfile_DirtyState dirtyState;

  /// @brief [Obsolete("This field was only public for editor access. #from(6000.0)")]
  __declspec(property(get = get_isDirty, put = set_isDirty)) bool isDirty;

  /// @brief Method Add, addr 0x6bec808, size 0x188, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Rendering::VolumeComponent> Add(::System::Type* type, bool overrides);

  /// @brief Method Add, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
    requires(::cordl_internals::type_constraint<T, ::UnityEngine::Rendering::VolumeComponent*>)
  inline T Add(bool overrides);

  /// @brief Method GetComponentListHashCode, addr 0x6becd34, size 0xd4, virtual false, abstract: false, final false
  inline int32_t GetComponentListHashCode();

  /// @brief Method GetStateHash, addr 0x6bece08, size 0x108, virtual false, abstract: false, final false
  inline int32_t GetStateHash();

  /// @brief Method Has, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
    requires(::cordl_internals::type_constraint<T, ::UnityEngine::Rendering::VolumeComponent*>)
  inline bool Has();

  /// @brief Method Has, addr 0x6bec990, size 0x148, virtual false, abstract: false, final false
  inline bool Has(::System::Type* type);

  /// @brief Method HasSubclassOf, addr 0x6becbe8, size 0x14c, virtual false, abstract: false, final false
  inline bool HasSubclassOf(::System::Type* type);

  static inline ::UnityEngine::Rendering::VolumeProfile* New_ctor();

  /// @brief Method OnDisable, addr 0x6bec704, size 0xf4, virtual false, abstract: false, final false
  inline void OnDisable();

  /// @brief Method OnEnable, addr 0x6bec5f8, size 0x10c, virtual false, abstract: false, final false
  inline void OnEnable();

  /// @brief Method Remove, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
    requires(::cordl_internals::type_constraint<T, ::UnityEngine::Rendering::VolumeComponent*>)
  inline void Remove();

  /// @brief Method Remove, addr 0x6becad8, size 0x110, virtual false, abstract: false, final false
  inline void Remove(::System::Type* type);

  /// @brief Method Reset, addr 0x6bec7f8, size 0x10, virtual false, abstract: false, final false
  inline void Reset();

  /// @brief Method Sanitize, addr 0x6becf10, size 0x110, virtual false, abstract: false, final false
  inline void Sanitize();

  /// @brief Method TryGet, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
    requires(::cordl_internals::type_constraint<T, ::UnityEngine::Rendering::VolumeComponent*>)
  inline bool TryGet(::by_ref<T> component);

  /// @brief Method TryGet, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
    requires(::cordl_internals::type_constraint<T, ::UnityEngine::Rendering::VolumeComponent*>)
  inline bool TryGet(::System::Type* type, ::by_ref<T> component);

  /// @brief Method TryGetAllSubclassOf, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
    requires(::cordl_internals::type_constraint<T, ::UnityEngine::Rendering::VolumeComponent*>)
  inline bool TryGetAllSubclassOf(::System::Type* type, ::System::Collections::Generic::List_1<T>* result);

  /// @brief Method TryGetSubclassOf, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
    requires(::cordl_internals::type_constraint<T, ::UnityEngine::Rendering::VolumeComponent*>)
  inline bool TryGetSubclassOf(::System::Type* type, ::by_ref<T> component);

  constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rendering::VolumeComponent>>* const& __cordl_internal_get_components() const;

  constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rendering::VolumeComponent>>*& __cordl_internal_get_components();

  constexpr ::UnityEngine::Rendering::VolumeProfile_DirtyState const& __cordl_internal_get_dirtyState() const;

  constexpr ::UnityEngine::Rendering::VolumeProfile_DirtyState& __cordl_internal_get_dirtyState();

  constexpr void __cordl_internal_set_components(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rendering::VolumeComponent>>* value);

  constexpr void __cordl_internal_set_dirtyState(::UnityEngine::Rendering::VolumeProfile_DirtyState value);

  /// @brief Method .ctor, addr 0x6bed020, size 0x7c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_isDirty, addr 0x6bec5c8, size 0x10, virtual false, abstract: false, final false
  inline bool get_isDirty();

  /// @brief Method set_isDirty, addr 0x6bec5d8, size 0x20, virtual false, abstract: false, final false
  inline void set_isDirty(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr VolumeProfile();

public:
  // Ctor Parameters [CppParam { name: "", ty: "VolumeProfile", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  VolumeProfile(VolumeProfile&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "VolumeProfile", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  VolumeProfile(VolumeProfile const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9258 };

  /// @brief Field components, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rendering::VolumeComponent>>* ___components;

  /// @brief Field dirtyState, offset: 0x20, size: 0x4, def value: None
  ::UnityEngine::Rendering::VolumeProfile_DirtyState ___dirtyState;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::VolumeProfile, ___components) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::VolumeProfile, ___dirtyState) == 0x20, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::VolumeProfile) == 0x28, "Size mismatch!");

} // namespace UnityEngine::Rendering
