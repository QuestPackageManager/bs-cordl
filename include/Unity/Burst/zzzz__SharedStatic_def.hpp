#pragma once
// IWYU pragma private; include "Unity/Burst/SharedStatic.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SharedStatic)
namespace Unity::Burst {
class SharedStatic_PreserveAttribute;
}
// Forward declare root types
namespace Unity::Burst {
class SharedStatic;
}
namespace Unity::Burst {
class SharedStatic_PreserveAttribute;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Burst::SharedStatic);
MARK_REF_PTR_T(::Unity::Burst::SharedStatic_PreserveAttribute);
// Dependencies System.Attribute
namespace Unity::Burst {
// Is value type: false
// CS Name: Unity.Burst.SharedStatic/PreserveAttribute
class CORDL_TYPE SharedStatic_PreserveAttribute : public ::System::Attribute {
public:
  // Declarations
  static inline ::Unity::Burst::SharedStatic_PreserveAttribute* New_ctor();

  /// @brief Method .ctor, addr 0x450d264, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SharedStatic_PreserveAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SharedStatic_PreserveAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SharedStatic_PreserveAttribute(SharedStatic_PreserveAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SharedStatic_PreserveAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SharedStatic_PreserveAttribute(SharedStatic_PreserveAttribute const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14635 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Burst::SharedStatic_PreserveAttribute, 0x10>, "Size mismatch!");

} // namespace Unity::Burst
// Dependencies System.Object
namespace Unity::Burst {
// Is value type: false
// CS Name: Unity.Burst.SharedStatic
class CORDL_TYPE SharedStatic : public ::System::Object {
public:
  // Declarations
  using PreserveAttribute = ::Unity::Burst::SharedStatic_PreserveAttribute;

  /// @brief Method CheckResult, addr 0x450d1c0, size 0x54, virtual false, abstract: false, final false
  static inline void CheckResult(::cordl_internals::Ptr<void> result);

  /// @brief Method CheckSizeOf, addr 0x450d154, size 0x6c, virtual false, abstract: false, final false
  static inline void CheckSizeOf(uint32_t sizeOf);

  /// @brief Method GetOrCreateSharedStaticInternal, addr 0x450d214, size 0x50, virtual false, abstract: false, final false
  static inline ::cordl_internals::Ptr<void> GetOrCreateSharedStaticInternal(int64_t getHashCode64, int64_t getSubHashCode64, uint32_t sizeOf, uint32_t alignment);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SharedStatic();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SharedStatic", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SharedStatic(SharedStatic&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SharedStatic", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SharedStatic(SharedStatic const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14636 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Burst::SharedStatic, 0x10>, "Size mismatch!");

} // namespace Unity::Burst
NEED_NO_BOX(::Unity::Burst::SharedStatic);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Burst::SharedStatic*, "Unity.Burst", "SharedStatic");
NEED_NO_BOX(::Unity::Burst::SharedStatic_PreserveAttribute);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Burst::SharedStatic_PreserveAttribute*, "Unity.Burst", "SharedStatic/PreserveAttribute");
