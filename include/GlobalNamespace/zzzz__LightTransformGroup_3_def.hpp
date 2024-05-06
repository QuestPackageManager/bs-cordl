#pragma once
// IWYU pragma private; include "GlobalNamespace/LightTransformGroup_3.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__LightGroupSubsystem_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(LightTransformGroup_3)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
template <typename TX, typename TY, typename TZ> class LightTransformGroup_3;
}
// Write type traits
MARK_GEN_REF_PTR_T(::GlobalNamespace::LightTransformGroup_3);
// Type: ::LightTransformGroup`3
// SizeInfo { instance_size: 64, native_size: 64, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// cpp template
template <typename TX, typename TY, typename TZ>
// Is value type: false
// CS Name: ::LightTransformGroup`3<TX,TY,TZ>*
class CORDL_TYPE LightTransformGroup_3 : public ::GlobalNamespace::LightGroupSubsystem {
public:
  // Declarations
  /// @brief Field _mirrorX, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get__mirrorX, put = __cordl_internal_set__mirrorX)) bool _mirrorX;

  /// @brief Field _mirrorY, offset 0x21, size 0x1
  __declspec(property(get = __cordl_internal_get__mirrorY, put = __cordl_internal_set__mirrorY)) bool _mirrorY;

  /// @brief Field _mirrorZ, offset 0x22, size 0x1
  __declspec(property(get = __cordl_internal_get__mirrorZ, put = __cordl_internal_set__mirrorZ)) bool _mirrorZ;

  /// @brief Field _xTransforms, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__xTransforms, put = __cordl_internal_set__xTransforms))::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>* _xTransforms;

  /// @brief Field _yTransforms, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__yTransforms, put = __cordl_internal_set__yTransforms))::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>* _yTransforms;

  /// @brief Field _zTransforms, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__zTransforms, put = __cordl_internal_set__zTransforms))::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>* _zTransforms;

  __declspec(property(get = get_count)) int32_t count;

  __declspec(property(get = get_mirrorX)) bool mirrorX;

  __declspec(property(get = get_mirrorY)) bool mirrorY;

  __declspec(property(get = get_mirrorZ)) bool mirrorZ;

  __declspec(property(get = get_xTransforms))::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>* xTransforms;

  __declspec(property(get = get_yTransforms))::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>* yTransforms;

  __declspec(property(get = get_zTransforms))::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>* zTransforms;

  static inline ::GlobalNamespace::LightTransformGroup_3<TX, TY, TZ>* New_ctor();

  constexpr bool const& __cordl_internal_get__mirrorX() const;

  constexpr bool& __cordl_internal_get__mirrorX();

  constexpr bool const& __cordl_internal_get__mirrorY() const;

  constexpr bool& __cordl_internal_get__mirrorY();

  constexpr bool const& __cordl_internal_get__mirrorZ() const;

  constexpr bool& __cordl_internal_get__mirrorZ();

  constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>*& __cordl_internal_get__xTransforms();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>*> const& __cordl_internal_get__xTransforms() const;

  constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>*& __cordl_internal_get__yTransforms();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>*> const& __cordl_internal_get__yTransforms() const;

  constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>*& __cordl_internal_get__zTransforms();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>*> const& __cordl_internal_get__zTransforms() const;

  constexpr void __cordl_internal_set__mirrorX(bool value);

  constexpr void __cordl_internal_set__mirrorY(bool value);

  constexpr void __cordl_internal_set__mirrorZ(bool value);

  constexpr void __cordl_internal_set__xTransforms(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>* value);

  constexpr void __cordl_internal_set__yTransforms(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>* value);

  constexpr void __cordl_internal_set__zTransforms(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>* value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_count, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline int32_t get_count();

  /// @brief Method get_mirrorX, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline bool get_mirrorX();

  /// @brief Method get_mirrorY, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline bool get_mirrorY();

  /// @brief Method get_mirrorZ, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline bool get_mirrorZ();

  /// @brief Method get_xTransforms, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>* get_xTransforms();

  /// @brief Method get_yTransforms, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>* get_yTransforms();

  /// @brief Method get_zTransforms, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>* get_zTransforms();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LightTransformGroup_3();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LightTransformGroup_3", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LightTransformGroup_3(LightTransformGroup_3&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LightTransformGroup_3", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LightTransformGroup_3(LightTransformGroup_3 const&) = delete;

  /// @brief Field _mirrorX, offset: 0x20, size: 0x1, def value: None
  bool ____mirrorX;

  /// @brief Field _mirrorY, offset: 0x21, size: 0x1, def value: None
  bool ____mirrorY;

  /// @brief Field _mirrorZ, offset: 0x22, size: 0x1, def value: None
  bool ____mirrorZ;

  /// @brief Field _xTransforms, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>* ____xTransforms;

  /// @brief Field _yTransforms, offset: 0x30, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>* ____yTransforms;

  /// @brief Field _zTransforms, offset: 0x38, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>* ____zTransforms;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::LightTransformGroup_3, "", "LightTransformGroup`3");
