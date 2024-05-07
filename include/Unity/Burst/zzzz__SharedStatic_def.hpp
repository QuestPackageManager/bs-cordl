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
class __SharedStatic__PreserveAttribute;
}
// Forward declare root types
namespace Unity::Burst {
class SharedStatic;
}
namespace Unity::Burst {
class __SharedStatic__PreserveAttribute;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Burst::SharedStatic);
MARK_REF_PTR_T(::Unity::Burst::__SharedStatic__PreserveAttribute);
// Type: ::PreserveAttribute
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Unity::Burst {
// Is value type: false
// CS Name: ::SharedStatic::PreserveAttribute*
class CORDL_TYPE __SharedStatic__PreserveAttribute : public ::System::Attribute {
public:
  // Declarations
  static inline ::Unity::Burst::__SharedStatic__PreserveAttribute* New_ctor();

  /// @brief Method .ctor, addr 0x3071628, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __SharedStatic__PreserveAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__SharedStatic__PreserveAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __SharedStatic__PreserveAttribute(__SharedStatic__PreserveAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__SharedStatic__PreserveAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __SharedStatic__PreserveAttribute(__SharedStatic__PreserveAttribute const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Burst::__SharedStatic__PreserveAttribute, 0x10>, "Size mismatch!");

} // namespace Unity::Burst
// Type: Unity.Burst::SharedStatic
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Unity::Burst {
// Is value type: false
// CS Name: ::Unity.Burst::SharedStatic*
class CORDL_TYPE SharedStatic : public ::System::Object {
public:
  // Declarations
  using PreserveAttribute = ::Unity::Burst::__SharedStatic__PreserveAttribute;

  /// @brief Method CheckResult, addr 0x3071580, size 0x58, virtual false, abstract: false, final false
  static inline void CheckResult(::cordl_internals::Ptr<void> result);

  /// @brief Method CheckSizeOf, addr 0x3071510, size 0x70, virtual false, abstract: false, final false
  static inline void CheckSizeOf(uint32_t sizeOf);

  /// @brief Method GetOrCreateSharedStaticInternal, addr 0x30715d8, size 0x50, virtual false, abstract: false, final false
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

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Burst::SharedStatic, 0x10>, "Size mismatch!");

} // namespace Unity::Burst
NEED_NO_BOX(::Unity::Burst::SharedStatic);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Burst::SharedStatic*, "Unity.Burst", "SharedStatic");
NEED_NO_BOX(::Unity::Burst::__SharedStatic__PreserveAttribute);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Burst::__SharedStatic__PreserveAttribute*, "Unity.Burst", "SharedStatic/PreserveAttribute");
