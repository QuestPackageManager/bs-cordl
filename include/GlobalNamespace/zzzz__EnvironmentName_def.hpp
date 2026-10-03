#pragma once
// IWYU pragma private; include "GlobalNamespace/EnvironmentName.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
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
DEFINE_IL2CPP_CLASS(::GlobalNamespace::EnvironmentName, "", "EnvironmentName");
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: EnvironmentName
struct CORDL_TYPE EnvironmentName {
public:
  // Declarations
  /// @brief Field Empty, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_Empty, put = setStaticF_Empty)) ::GlobalNamespace::EnvironmentName Empty;

  /// @brief Method Equals, addr 0x39920e8, size 0x90, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals, addr 0x39920e0, size 0x8, virtual false, abstract: false, final false
  inline bool Equals(::GlobalNamespace::EnvironmentName other);

  /// @brief Method GetHashCode, addr 0x3992178, size 0x18, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method ToString, addr 0x3992210, size 0x8, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method .ctor, addr 0x39920d8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::StringW environmentName);

  static inline ::GlobalNamespace::EnvironmentName getStaticF_Empty();

  /// @brief Method op_Equality, addr 0x3992198, size 0x4, virtual false, abstract: false, final false
  static inline bool op_Equality(::GlobalNamespace::EnvironmentName a, ::GlobalNamespace::EnvironmentName b);

  /// @brief Method op_Implicit, addr 0x3992194, size 0x4, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::EnvironmentName op_Implicit___GlobalNamespace__EnvironmentName(::StringW environmentName);

  /// @brief Method op_Implicit, addr 0x3992190, size 0x4, virtual false, abstract: false, final false
  static inline ::StringW op_Implicit___StringW(::GlobalNamespace::EnvironmentName e);

  /// @brief Method op_Inequality, addr 0x399219c, size 0x74, virtual false, abstract: false, final false
  static inline bool op_Inequality(::GlobalNamespace::EnvironmentName a, ::GlobalNamespace::EnvironmentName b);

  static inline void setStaticF_Empty(::GlobalNamespace::EnvironmentName value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr EnvironmentName();

  // Ctor Parameters [CppParam { name: "_environmentName", ty: "::StringW", modifiers: "", def_value: None, comment: None }]
  constexpr EnvironmentName(::StringW _environmentName) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15083 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  /// [SerializeField]
  /// @brief Field _environmentName, offset: 0x0, size: 0x8, def value: None
  ::StringW _environmentName;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::EnvironmentName, _environmentName) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::EnvironmentName) == 0x8, "Size mismatch!");

} // namespace GlobalNamespace
