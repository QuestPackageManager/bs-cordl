#pragma once
// IWYU pragma private; include "GlobalNamespace\ITimeProvider.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstdint>
CORDL_MODULE_EXPORT(ITimeProvider)
// Forward declare root types
namespace GlobalNamespace {
class ITimeProvider;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::ITimeProvider*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ITimeProvider*, "", "ITimeProvider");
// Dependencies
namespace GlobalNamespace {
// Is value type: false
// CS Name: ITimeProvider
class CORDL_TYPE ITimeProvider {
public:
  // Declarations
  __declspec(property(get = get_time)) int64_t time;

  /// @brief Method get_time, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline int64_t get_time();

  // Ctor Parameters [CppParam { name: "", ty: "ITimeProvider", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ITimeProvider(ITimeProvider const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22770 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
