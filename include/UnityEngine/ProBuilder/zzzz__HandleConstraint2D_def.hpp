#pragma once
// IWYU pragma private; include "UnityEngine/ProBuilder/HandleConstraint2D.hpp"
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
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::ProBuilder {
// Is value type: false
// CS Name: ::UnityEngine.ProBuilder::HandleConstraint2D*
class CORDL_TYPE HandleConstraint2D : public ::System::Object {
public:
  // Declarations
  /// @brief Field None, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_None, put = setStaticF_None)) ::UnityEngine::ProBuilder::HandleConstraint2D* None;

  /// @brief Field x, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_x, put = __cordl_internal_set_x)) int32_t x;

  /// @brief Field y, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get_y, put = __cordl_internal_set_y)) int32_t y;

  /// @brief Method Equals, addr 0x4693f44, size 0x80, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* o);

  /// @brief Method GetHashCode, addr 0x4693f3c, size 0x8, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method Inverse, addr 0x4693e08, size 0x74, virtual false, abstract: false, final false
  inline ::UnityEngine::ProBuilder::HandleConstraint2D* Inverse();

  /// @brief Method InverseMask, addr 0x4693e94, size 0x28, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2 InverseMask(::UnityEngine::Vector2 v);

  /// @brief Method Mask, addr 0x4693e7c, size 0x18, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2 Mask(::UnityEngine::Vector2 v);

  static inline ::UnityEngine::ProBuilder::HandleConstraint2D* New_ctor(int32_t x, int32_t y);

  /// @brief Method ToString, addr 0x4693fc4, size 0x108, virtual true, abstract: false, final false
  inline ::StringW ToString();

  constexpr int32_t const& __cordl_internal_get_x() const;

  constexpr int32_t& __cordl_internal_get_x();

  constexpr int32_t const& __cordl_internal_get_y() const;

  constexpr int32_t& __cordl_internal_get_y();

  constexpr void __cordl_internal_set_x(int32_t value);

  constexpr void __cordl_internal_set_y(int32_t value);

  /// @brief Method .ctor, addr 0x4693ddc, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(int32_t x, int32_t y);

  static inline ::UnityEngine::ProBuilder::HandleConstraint2D* getStaticF_None();

  /// @brief Method op_Equality, addr 0x4693ebc, size 0x40, virtual false, abstract: false, final false
  static inline bool op_Equality(::UnityEngine::ProBuilder::HandleConstraint2D* a, ::UnityEngine::ProBuilder::HandleConstraint2D* b);

  /// @brief Method op_Inequality, addr 0x4693efc, size 0x40, virtual false, abstract: false, final false
  static inline bool op_Inequality(::UnityEngine::ProBuilder::HandleConstraint2D* a, ::UnityEngine::ProBuilder::HandleConstraint2D* b);

  static inline void setStaticF_None(::UnityEngine::ProBuilder::HandleConstraint2D* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HandleConstraint2D();

public:
  // Ctor Parameters [CppParam { name: "", ty: "HandleConstraint2D", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HandleConstraint2D(HandleConstraint2D&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HandleConstraint2D", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HandleConstraint2D(HandleConstraint2D const&) = delete;

  /// @brief Field x, offset: 0x10, size: 0x4, def value: None
  int32_t ___x;

  /// @brief Field y, offset: 0x14, size: 0x4, def value: None
  int32_t ___y;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14198 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ProBuilder::HandleConstraint2D, 0x18>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::HandleConstraint2D, ___x) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::HandleConstraint2D, ___y) == 0x14, "Offset mismatch!");

} // namespace UnityEngine::ProBuilder
NEED_NO_BOX(::UnityEngine::ProBuilder::HandleConstraint2D);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::HandleConstraint2D*, "UnityEngine.ProBuilder", "HandleConstraint2D");
