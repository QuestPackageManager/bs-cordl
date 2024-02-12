#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(HandleConstraint2D)
namespace System {
class Object;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace UnityEngine::ProBuilder {
class HandleConstraint2D;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::ProBuilder::HandleConstraint2D);
// Type: UnityEngine.ProBuilder::HandleConstraint2D
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::ProBuilder {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12024))
// CS Name: ::UnityEngine.ProBuilder::HandleConstraint2D*
class CORDL_TYPE HandleConstraint2D : public ::System::Object {
public:
  // Declarations
  /// @brief Field x, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_x, put = __cordl_internal_set_x)) int32_t x;

  /// @brief Field y, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get_y, put = __cordl_internal_set_y)) int32_t y;

  /// @brief Field None, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_None, put = setStaticF_None))::UnityEngine::ProBuilder::HandleConstraint2D* None;

  constexpr int32_t& __cordl_internal_get_x();

  constexpr int32_t const& __cordl_internal_get_x() const;

  constexpr void __cordl_internal_set_x(int32_t value);

  constexpr int32_t& __cordl_internal_get_y();

  constexpr int32_t const& __cordl_internal_get_y() const;

  constexpr void __cordl_internal_set_y(int32_t value);

  static inline void setStaticF_None(::UnityEngine::ProBuilder::HandleConstraint2D* value);

  static inline ::UnityEngine::ProBuilder::HandleConstraint2D* getStaticF_None();

  static inline ::UnityEngine::ProBuilder::HandleConstraint2D* New_ctor(int32_t x, int32_t y);

  /// @brief Method .ctor, addr 0x2b40fb8, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(int32_t x, int32_t y);

  /// @brief Method Inverse, addr 0x2b40fe4, size 0x80, virtual false, abstract: false, final false
  inline ::UnityEngine::ProBuilder::HandleConstraint2D* Inverse();

  /// @brief Method Mask, addr 0x2b41064, size 0x18, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2 Mask(::UnityEngine::Vector2 v);

  /// @brief Method InverseMask, addr 0x2b4107c, size 0x28, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2 InverseMask(::UnityEngine::Vector2 v);

  /// @brief Method op_Equality, addr 0x2b410a4, size 0x40, virtual false, abstract: false, final false
  static inline bool op_Equality(::UnityEngine::ProBuilder::HandleConstraint2D* a, ::UnityEngine::ProBuilder::HandleConstraint2D* b);

  /// @brief Method op_Inequality, addr 0x2b410e4, size 0x40, virtual false, abstract: false, final false
  static inline bool op_Inequality(::UnityEngine::ProBuilder::HandleConstraint2D* a, ::UnityEngine::ProBuilder::HandleConstraint2D* b);

  /// @brief Method GetHashCode, addr 0x2b41124, size 0x8, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method Equals, addr 0x2b4112c, size 0x80, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* o);

  /// @brief Method ToString, addr 0x2b411ac, size 0x1a4, virtual true, abstract: false, final false
  inline ::StringW ToString();

  // Ctor Parameters [CppParam { name: "", ty: "HandleConstraint2D", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HandleConstraint2D(HandleConstraint2D&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HandleConstraint2D", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HandleConstraint2D(HandleConstraint2D const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HandleConstraint2D();

public:
  /// @brief Field x, offset: 0x10, size: 0x4, def value: None
  int32_t ___x;

  /// @brief Field y, offset: 0x14, size: 0x4, def value: None
  int32_t ___y;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ProBuilder::HandleConstraint2D, 0x18>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::HandleConstraint2D, ___x) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::HandleConstraint2D, ___y) == 0x14, "Offset mismatch!");

} // namespace UnityEngine::ProBuilder
NEED_NO_BOX(::UnityEngine::ProBuilder::HandleConstraint2D);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::HandleConstraint2D*, "UnityEngine.ProBuilder", "HandleConstraint2D");
