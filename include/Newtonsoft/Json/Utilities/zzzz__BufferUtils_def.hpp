#pragma once
// IWYU pragma private; include "Newtonsoft/Json/Utilities/BufferUtils.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BufferUtils)
namespace Newtonsoft::Json {
template <typename T> class IArrayPool_1;
}
// Forward declare root types
namespace Newtonsoft::Json::Utilities {
class BufferUtils;
}
// Write type traits
MARK_REF_PTR_T(::Newtonsoft::Json::Utilities::BufferUtils);
// Type: Newtonsoft.Json.Utilities::BufferUtils
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Newtonsoft::Json::Utilities {
// Is value type: false
// CS Name: ::Newtonsoft.Json.Utilities::BufferUtils*
class CORDL_TYPE BufferUtils : public ::System::Object {
public:
  // Declarations
  /// @brief Method EnsureBufferSize, addr 0x2a1452c, size 0x13c, virtual false, abstract: false, final false
  static inline ::ArrayW<char16_t, ::Array<char16_t>*> EnsureBufferSize(::Newtonsoft::Json::IArrayPool_1<char16_t>* bufferPool, int32_t size, ::ArrayW<char16_t, ::Array<char16_t>*> buffer);

  /// @brief Method RentBuffer, addr 0x2a143b4, size 0xc8, virtual false, abstract: false, final false
  static inline ::ArrayW<char16_t, ::Array<char16_t>*> RentBuffer(::Newtonsoft::Json::IArrayPool_1<char16_t>* bufferPool, int32_t minSize);

  /// @brief Method ReturnBuffer, addr 0x2a1447c, size 0xb0, virtual false, abstract: false, final false
  static inline void ReturnBuffer(::Newtonsoft::Json::IArrayPool_1<char16_t>* bufferPool, ::ArrayW<char16_t, ::Array<char16_t>*> buffer);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BufferUtils();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BufferUtils", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BufferUtils(BufferUtils&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BufferUtils", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BufferUtils(BufferUtils const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Utilities::BufferUtils, 0x10>, "Size mismatch!");

} // namespace Newtonsoft::Json::Utilities
NEED_NO_BOX(::Newtonsoft::Json::Utilities::BufferUtils);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Utilities::BufferUtils*, "Newtonsoft.Json.Utilities", "BufferUtils");
