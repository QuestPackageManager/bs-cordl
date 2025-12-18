#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/VolumeProfile.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
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
class VolumeProfile___c;
}
// Forward declare root types
namespace UnityEngine::Rendering {
class VolumeProfile;
}
namespace UnityEngine::Rendering {
class VolumeProfile___c;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::VolumeProfile);
MARK_REF_PTR_T(::UnityEngine::Rendering::VolumeProfile___c);
// Dependencies System.Object
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.VolumeProfile/<>c
class CORDL_TYPE VolumeProfile___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::UnityEngine::Rendering::VolumeProfile___c* __9;

  /// @brief Field <>9__2_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__2_0, put = setStaticF___9__2_0)) ::System::Predicate_1<::UnityW<::UnityEngine::Rendering::VolumeComponent>>* __9__2_0;

  static inline ::UnityEngine::Rendering::VolumeProfile___c* New_ctor();

  /// @brief Method <OnEnable>b__2_0, addr 0x6617ef0, size 0x60, virtual false, abstract: false, final false
  inline bool _OnEnable_b__2_0(::UnityEngine::Rendering::VolumeComponent* x);

  /// @brief Method .ctor, addr 0x6617eec, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::Rendering::VolumeProfile___c* getStaticF___9();

  static inline ::System::Predicate_1<::UnityW<::UnityEngine::Rendering::VolumeComponent>>* getStaticF___9__2_0();

  static inline void setStaticF___9(::UnityEngine::Rendering::VolumeProfile___c* value);

  static inline void setStaticF___9__2_0(::System::Predicate_1<::UnityW<::UnityEngine::Rendering::VolumeComponent>>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr VolumeProfile___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "VolumeProfile___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  VolumeProfile___c(VolumeProfile___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "VolumeProfile___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  VolumeProfile___c(VolumeProfile___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12350 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::VolumeProfile___c, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Rendering
// Dependencies UnityEngine.ScriptableObject
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.VolumeProfile
class CORDL_TYPE VolumeProfile : public ::UnityEngine::ScriptableObject {
public:
  // Declarations
  using __c = ::UnityEngine::Rendering::VolumeProfile___c;

  /// @brief Field components, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_components,
                      put = __cordl_internal_set_components)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rendering::VolumeComponent>>* components;

  /// @brief Field isDirty, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get_isDirty, put = __cordl_internal_set_isDirty)) bool isDirty;

  /// @brief Method Add, addr 0x6617668, size 0x184, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Rendering::VolumeComponent> Add(::System::Type* type, bool overrides);

  /// @brief Method Add, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline T Add(bool overrides);

  /// @brief Method GetComponentListHashCode, addr 0x6617c40, size 0xc4, virtual false, abstract: false, final false
  inline int32_t GetComponentListHashCode();

  /// @brief Method GetHashCode, addr 0x6617b8c, size 0xb4, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method Has, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline bool Has();

  /// @brief Method Has, addr 0x66177ec, size 0x148, virtual false, abstract: false, final false
  inline bool Has(::System::Type* type);

  /// @brief Method HasSubclassOf, addr 0x6617a40, size 0x14c, virtual false, abstract: false, final false
  inline bool HasSubclassOf(::System::Type* type);

  static inline ::UnityEngine::Rendering::VolumeProfile* New_ctor();

  /// @brief Method OnDisable, addr 0x6617568, size 0xf4, virtual false, abstract: false, final false
  inline void OnDisable();

  /// @brief Method OnEnable, addr 0x661745c, size 0x10c, virtual false, abstract: false, final false
  inline void OnEnable();

  /// @brief Method Remove, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline void Remove();

  /// @brief Method Remove, addr 0x6617934, size 0x10c, virtual false, abstract: false, final false
  inline void Remove(::System::Type* type);

  /// @brief Method Reset, addr 0x661765c, size 0xc, virtual false, abstract: false, final false
  inline void Reset();

  /// @brief Method Sanitize, addr 0x6617d04, size 0x110, virtual false, abstract: false, final false
  inline void Sanitize();

  /// @brief Method TryGet, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline bool TryGet(::ByRef<T> component);

  /// @brief Method TryGet, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline bool TryGet(::System::Type* type, ::ByRef<T> component);

  /// @brief Method TryGetAllSubclassOf, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline bool TryGetAllSubclassOf(::System::Type* type, ::System::Collections::Generic::List_1<T>* result);

  /// @brief Method TryGetSubclassOf, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline bool TryGetSubclassOf(::System::Type* type, ::ByRef<T> component);

  constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rendering::VolumeComponent>>* const& __cordl_internal_get_components() const;

  constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rendering::VolumeComponent>>*& __cordl_internal_get_components();

  constexpr bool const& __cordl_internal_get_isDirty() const;

  constexpr bool& __cordl_internal_get_isDirty();

  constexpr void __cordl_internal_set_components(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rendering::VolumeComponent>>* value);

  constexpr void __cordl_internal_set_isDirty(bool value);

  /// @brief Method .ctor, addr 0x6617e14, size 0x84, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr VolumeProfile();

public:
  // Ctor Parameters [CppParam { name: "", ty: "VolumeProfile", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  VolumeProfile(VolumeProfile&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "VolumeProfile", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  VolumeProfile(VolumeProfile const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12351 };

  /// @brief Field components, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rendering::VolumeComponent>>* ___components;

  /// @brief Field isDirty, offset: 0x20, size: 0x1, def value: None
  bool ___isDirty;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::VolumeProfile, ___components) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::VolumeProfile, ___isDirty) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::VolumeProfile, 0x28>, "Size mismatch!");

} // namespace UnityEngine::Rendering
NEED_NO_BOX(::UnityEngine::Rendering::VolumeProfile);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::VolumeProfile*, "UnityEngine.Rendering", "VolumeProfile");
NEED_NO_BOX(::UnityEngine::Rendering::VolumeProfile___c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::VolumeProfile___c*, "UnityEngine.Rendering", "VolumeProfile/<>c");
