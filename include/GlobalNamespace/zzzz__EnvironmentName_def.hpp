#pragma once
// IWYU pragma private; include "GlobalNamespace/EnvironmentName.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(EnvironmentName)
namespace System {
class Object;
}
// Forward declare root types
namespace GlobalNamespace {
struct EnvironmentName;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::EnvironmentName);
// Type: ::EnvironmentName
// SizeInfo { instance_size: 8, native_size: 8, calculated_instance_size: 8, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::EnvironmentName
struct CORDL_TYPE EnvironmentName {
public:
  // Declarations
  /// @brief Field Empty, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Empty, put = setStaticF_Empty))::GlobalNamespace::EnvironmentName Empty;

  /// @brief Method Equals, addr 0x149ddac, size 0x7c, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals, addr 0x149dda0, size 0xc, virtual false, abstract: false, final false
  inline bool Equals(::GlobalNamespace::EnvironmentName other);

  /// @brief Method GetHashCode, addr 0x149de28, size 0x18, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method ToString, addr 0x149dec4, size 0x8, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method .ctor, addr 0x149dd98, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::StringW environmentName);

  static inline ::GlobalNamespace::EnvironmentName getStaticF_Empty();

  /// @brief Method op_Equality, addr 0x149de48, size 0x8, virtual false, abstract: false, final false
  static inline bool op_Equality(::GlobalNamespace::EnvironmentName a, ::GlobalNamespace::EnvironmentName b);

  /// @brief Method op_Implicit, addr 0x149de44, size 0x4, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::EnvironmentName op_Implicit___GlobalNamespace__EnvironmentName(::StringW environmentName);

  /// @brief Method op_Implicit, addr 0x149de40, size 0x4, virtual false, abstract: false, final false
  static inline ::StringW op_Implicit___StringW(::GlobalNamespace::EnvironmentName e);

  /// @brief Method op_Inequality, addr 0x149de50, size 0x74, virtual false, abstract: false, final false
  static inline bool op_Inequality(::GlobalNamespace::EnvironmentName a, ::GlobalNamespace::EnvironmentName b);

  static inline void setStaticF_Empty(::GlobalNamespace::EnvironmentName value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr EnvironmentName();

  // Ctor Parameters [CppParam { name: "_environmentName", ty: "::StringW", modifiers: "", def_value: None }]
  constexpr EnvironmentName(::StringW _environmentName) noexcept;

  /// @brief Field _environmentName, offset: 0x0, size: 0x8, def value: None
  ::StringW _environmentName;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::EnvironmentName, 0x8>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::EnvironmentName, _environmentName) == 0x0, "Offset mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::EnvironmentName, "", "EnvironmentName");
