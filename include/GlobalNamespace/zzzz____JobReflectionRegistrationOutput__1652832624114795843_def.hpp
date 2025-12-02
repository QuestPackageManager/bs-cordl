#pragma once
// IWYU pragma private; include "GlobalNamespace/__JobReflectionRegistrationOutput__1652832624114795843.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(__JobReflectionRegistrationOutput__1652832624114795843)
// Forward declare root types
namespace GlobalNamespace {
class __JobReflectionRegistrationOutput__1652832624114795843;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::__JobReflectionRegistrationOutput__1652832624114795843);
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: __JobReflectionRegistrationOutput__1652832624114795843
class CORDL_TYPE __JobReflectionRegistrationOutput__1652832624114795843 : public ::System::Object {
public:
  // Declarations
  /// @brief Method CreateJobReflectionData, addr 0x62b1e78, size 0x30c, virtual false, abstract: false, final false
  static inline void CreateJobReflectionData();

  /// @brief Method EarlyInit, addr 0x62b2184, size 0x4, virtual false, abstract: false, final false
  static inline void EarlyInit();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __JobReflectionRegistrationOutput__1652832624114795843();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__JobReflectionRegistrationOutput__1652832624114795843", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __JobReflectionRegistrationOutput__1652832624114795843(__JobReflectionRegistrationOutput__1652832624114795843&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__JobReflectionRegistrationOutput__1652832624114795843", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __JobReflectionRegistrationOutput__1652832624114795843(__JobReflectionRegistrationOutput__1652832624114795843 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15794 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__JobReflectionRegistrationOutput__1652832624114795843, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::__JobReflectionRegistrationOutput__1652832624114795843);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__JobReflectionRegistrationOutput__1652832624114795843*, "", "__JobReflectionRegistrationOutput__1652832624114795843");
