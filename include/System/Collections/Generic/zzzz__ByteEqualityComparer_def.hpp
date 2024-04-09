#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/Generic/zzzz__EqualityComparer_1_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ByteEqualityComparer)
namespace System {
class Object;
}
// Forward declare root types
namespace System::Collections::Generic {
class ByteEqualityComparer;
}
// Write type traits
MARK_REF_PTR_T(::System::Collections::Generic::ByteEqualityComparer);
// Type: System.Collections.Generic::ByteEqualityComparer
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Collections::Generic {
// Is value type: false
// CS Name: ::System.Collections.Generic::ByteEqualityComparer*
class CORDL_TYPE ByteEqualityComparer : public ::System::Collections::Generic::EqualityComparer_1<uint8_t> {
public:
  // Declarations
  /// @brief Method Equals, addr 0x280be00, size 0x78, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals, addr 0x280bbe8, size 0x10, virtual true, abstract: false, final false
  inline bool Equals(uint8_t x, uint8_t y);

  /// @brief Method GetHashCode, addr 0x280be78, size 0x34, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method GetHashCode, addr 0x280bbf8, size 0x1c, virtual true, abstract: false, final false
  inline int32_t GetHashCode(uint8_t b);

  /// @brief Method IndexOf, addr 0x280bc14, size 0x194, virtual true, abstract: false, final false
  inline int32_t IndexOf(::ArrayW<uint8_t, ::Array<uint8_t>*> array, uint8_t value, int32_t startIndex, int32_t count);

  /// @brief Method LastIndexOf, addr 0x280bda8, size 0x58, virtual true, abstract: false, final false
  inline int32_t LastIndexOf(::ArrayW<uint8_t, ::Array<uint8_t>*> array, uint8_t value, int32_t startIndex, int32_t count);

  static inline ::System::Collections::Generic::ByteEqualityComparer* New_ctor();

  /// @brief Method .ctor, addr 0x280beac, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ByteEqualityComparer();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ByteEqualityComparer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ByteEqualityComparer(ByteEqualityComparer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ByteEqualityComparer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ByteEqualityComparer(ByteEqualityComparer const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Collections::Generic::ByteEqualityComparer, 0x10>, "Size mismatch!");

} // namespace System::Collections::Generic
NEED_NO_BOX(::System::Collections::Generic::ByteEqualityComparer);
DEFINE_IL2CPP_ARG_TYPE(::System::Collections::Generic::ByteEqualityComparer*, "System.Collections.Generic", "ByteEqualityComparer");
