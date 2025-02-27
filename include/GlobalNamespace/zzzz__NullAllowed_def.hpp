#pragma once
// IWYU pragma private; include "GlobalNamespace/NullAllowed.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__PropertyAttribute_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(NullAllowed)
namespace GlobalNamespace {
struct NullAllowed_Context;
}
// Forward declare root types
namespace GlobalNamespace {
struct NullAllowed_Context;
}
namespace GlobalNamespace {
class NullAllowed;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::NullAllowed_Context);
MARK_REF_PTR_T(::GlobalNamespace::NullAllowed);
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: NullAllowed/Context
struct CORDL_TYPE NullAllowed_Context {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __NullAllowed_Context_Unwrapped
  enum struct __NullAllowed_Context_Unwrapped : int32_t {
    __E_Everywhere = static_cast<int32_t>(0x0),
    __E_Prefab = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __NullAllowed_Context_Unwrapped() const noexcept {
    return static_cast<__NullAllowed_Context_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr NullAllowed_Context();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr NullAllowed_Context(int32_t value__) noexcept;

  /// @brief Field Everywhere value: I32(0)
  static ::GlobalNamespace::NullAllowed_Context const Everywhere;

  /// @brief Field Prefab value: I32(1)
  static ::GlobalNamespace::NullAllowed_Context const Prefab;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19158 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::NullAllowed_Context, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::NullAllowed_Context, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies NullAllowed::Context, UnityEngine.PropertyAttribute
namespace GlobalNamespace {
// Is value type: false
// CS Name: NullAllowed
class CORDL_TYPE NullAllowed : public ::UnityEngine::PropertyAttribute {
public:
  // Declarations
  using Context = ::GlobalNamespace::NullAllowed_Context;

  /// @brief Field _context, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get__context, put = __cordl_internal_set__context)) ::GlobalNamespace::NullAllowed_Context _context;

  /// @brief Method IsNullAllowedFor, addr 0x22a253c, size 0x1c, virtual false, abstract: false, final false
  inline bool IsNullAllowedFor(::GlobalNamespace::NullAllowed_Context context);

  static inline ::GlobalNamespace::NullAllowed* New_ctor(::GlobalNamespace::NullAllowed_Context context);

  constexpr ::GlobalNamespace::NullAllowed_Context const& __cordl_internal_get__context() const;

  constexpr ::GlobalNamespace::NullAllowed_Context& __cordl_internal_get__context();

  constexpr void __cordl_internal_set__context(::GlobalNamespace::NullAllowed_Context value);

  /// @brief Method .ctor, addr 0x22a2514, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::NullAllowed_Context context);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NullAllowed();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NullAllowed", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NullAllowed(NullAllowed&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NullAllowed", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NullAllowed(NullAllowed const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19159 };

  /// @brief Field _context, offset: 0x10, size: 0x4, def value: None
  ::GlobalNamespace::NullAllowed_Context ____context;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::NullAllowed, ____context) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::NullAllowed, 0x18>, "Size mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::NullAllowed_Context, "", "NullAllowed/Context");
NEED_NO_BOX(::GlobalNamespace::NullAllowed);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::NullAllowed*, "", "NullAllowed");
