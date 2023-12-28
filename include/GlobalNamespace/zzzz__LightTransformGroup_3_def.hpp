#pragma once
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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(4935))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4943))
// CS Name: ::LightTransformGroup`3<TX,TY,TZ>*
class CORDL_TYPE LightTransformGroup_3 : public ::GlobalNamespace::LightGroupSubsystem {
public:
  // Declarations
  /// @brief Field _mirrorX, offset 0x20, size 0x1
  __declspec(property(get = __get__mirrorX, put = __set__mirrorX)) bool _mirrorX;

  /// @brief Field _mirrorY, offset 0x21, size 0x1
  __declspec(property(get = __get__mirrorY, put = __set__mirrorY)) bool _mirrorY;

  /// @brief Field _mirrorZ, offset 0x22, size 0x1
  __declspec(property(get = __get__mirrorZ, put = __set__mirrorZ)) bool _mirrorZ;

  /// @brief Field _xTransforms, offset 0x28, size 0x8
  __declspec(property(get = __get__xTransforms, put = __set__xTransforms))::System::Collections::Generic::List_1<::UnityEngine::Transform*>* _xTransforms;

  /// @brief Field _yTransforms, offset 0x30, size 0x8
  __declspec(property(get = __get__yTransforms, put = __set__yTransforms))::System::Collections::Generic::List_1<::UnityEngine::Transform*>* _yTransforms;

  /// @brief Field _zTransforms, offset 0x38, size 0x8
  __declspec(property(get = __get__zTransforms, put = __set__zTransforms))::System::Collections::Generic::List_1<::UnityEngine::Transform*>* _zTransforms;

  __declspec(property(get = get_mirrorX)) bool mirrorX;

  __declspec(property(get = get_mirrorY)) bool mirrorY;

  __declspec(property(get = get_mirrorZ)) bool mirrorZ;

  __declspec(property(get = get_xTransforms))::System::Collections::Generic::List_1<::UnityEngine::Transform*>* xTransforms;

  __declspec(property(get = get_yTransforms))::System::Collections::Generic::List_1<::UnityEngine::Transform*>* yTransforms;

  __declspec(property(get = get_zTransforms))::System::Collections::Generic::List_1<::UnityEngine::Transform*>* zTransforms;

  __declspec(property(get = get_count)) int32_t count;

  constexpr bool& __get__mirrorX();

  constexpr bool const& __get__mirrorX() const;

  constexpr void __set__mirrorX(bool value);

  constexpr bool& __get__mirrorY();

  constexpr bool const& __get__mirrorY() const;

  constexpr void __set__mirrorY(bool value);

  constexpr bool& __get__mirrorZ();

  constexpr bool const& __get__mirrorZ() const;

  constexpr void __set__mirrorZ(bool value);

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::Transform*>*& __get__xTransforms();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::Transform*>*> const& __get__xTransforms() const;

  constexpr void __set__xTransforms(::System::Collections::Generic::List_1<::UnityEngine::Transform*>* value);

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::Transform*>*& __get__yTransforms();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::Transform*>*> const& __get__yTransforms() const;

  constexpr void __set__yTransforms(::System::Collections::Generic::List_1<::UnityEngine::Transform*>* value);

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::Transform*>*& __get__zTransforms();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::Transform*>*> const& __get__zTransforms() const;

  constexpr void __set__zTransforms(::System::Collections::Generic::List_1<::UnityEngine::Transform*>* value);

  /// @brief Method get_mirrorX addr 0x0 size 0xffffffffffffffff virtual false final false
  inline bool get_mirrorX();

  /// @brief Method get_mirrorY addr 0x0 size 0xffffffffffffffff virtual false final false
  inline bool get_mirrorY();

  /// @brief Method get_mirrorZ addr 0x0 size 0xffffffffffffffff virtual false final false
  inline bool get_mirrorZ();

  /// @brief Method get_xTransforms addr 0x0 size 0xffffffffffffffff virtual false final false
  inline ::System::Collections::Generic::List_1<::UnityEngine::Transform*>* get_xTransforms();

  /// @brief Method get_yTransforms addr 0x0 size 0xffffffffffffffff virtual false final false
  inline ::System::Collections::Generic::List_1<::UnityEngine::Transform*>* get_yTransforms();

  /// @brief Method get_zTransforms addr 0x0 size 0xffffffffffffffff virtual false final false
  inline ::System::Collections::Generic::List_1<::UnityEngine::Transform*>* get_zTransforms();

  /// @brief Method get_count addr 0x0 size 0xffffffffffffffff virtual false final false
  inline int32_t get_count();

  static inline ::GlobalNamespace::LightTransformGroup_3<TX, TY, TZ>* New_ctor();

  /// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "LightTransformGroup_3", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LightTransformGroup_3(LightTransformGroup_3&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LightTransformGroup_3", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LightTransformGroup_3(LightTransformGroup_3 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LightTransformGroup_3();

public:
  /// @brief Field _mirrorX, offset: 0x20, size: 0x1, def value: None
  bool ____mirrorX;

  /// @brief Field _mirrorY, offset: 0x21, size: 0x1, def value: None
  bool ____mirrorY;

  /// @brief Field _mirrorZ, offset: 0x22, size: 0x1, def value: None
  bool ____mirrorZ;

  /// @brief Field _xTransforms, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::Transform*>* ____xTransforms;

  /// @brief Field _yTransforms, offset: 0x30, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::Transform*>* ____yTransforms;

  /// @brief Field _zTransforms, offset: 0x38, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::Transform*>* ____zTransforms;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::LightTransformGroup_3, "", "LightTransformGroup`3");
