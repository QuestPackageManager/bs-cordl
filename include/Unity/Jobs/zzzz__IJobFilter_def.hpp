#pragma once
// IWYU pragma private; include "Unity\Jobs\IJobFilter.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstdint>
CORDL_MODULE_EXPORT(IJobFilter)
// Forward declare root types
namespace Unity::Jobs {
class IJobFilter;
}
// Write type traits
MARK_REF_T(::Unity::Jobs::IJobFilter*);
DEFINE_IL2CPP_CLASS(::Unity::Jobs::IJobFilter*, "Unity.Jobs", "IJobFilter");
// Dependencies
namespace Unity::Jobs {
// Is value type: false
// CS Name: Unity.Jobs.IJobFilter
class CORDL_TYPE IJobFilter {
public:
  // Declarations
  /// @brief Method Execute, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool Execute(int32_t index);

  // Ctor Parameters [CppParam { name: "", ty: "IJobFilter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IJobFilter(IJobFilter const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15506 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Unity::Jobs
