#pragma once
// IWYU pragma private; include "ENet/ArrayPool.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ArrayPool)
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace ENet {
class ArrayPool;
}
// Write type traits
MARK_REF_PTR_T(::ENet::ArrayPool);
// Dependencies System.Object
namespace ENet {
// Is value type: false
// CS Name: ENet.ArrayPool
class CORDL_TYPE ArrayPool : public ::System::Object {
public:
  // Declarations
  /// @brief Field byteBuffer, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_byteBuffer, put = setStaticF_byteBuffer)) ::ArrayW<uint8_t, ::Array<uint8_t>*> byteBuffer;

  /// @brief Field pointerBuffer, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_pointerBuffer, put = setStaticF_pointerBuffer)) ::ArrayW<::System::IntPtr, ::Array<::System::IntPtr>*> pointerBuffer;

  /// @brief Method GetByteBuffer, addr 0x3a9df94, size 0x94, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetByteBuffer();

  /// @brief Method GetPointerBuffer, addr 0x3a9e028, size 0x94, virtual false, abstract: false, final false
  static inline ::ArrayW<::System::IntPtr, ::Array<::System::IntPtr>*> GetPointerBuffer();

  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> getStaticF_byteBuffer();

  static inline ::ArrayW<::System::IntPtr, ::Array<::System::IntPtr>*> getStaticF_pointerBuffer();

  static inline void setStaticF_byteBuffer(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  static inline void setStaticF_pointerBuffer(::ArrayW<::System::IntPtr, ::Array<::System::IntPtr>*> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ArrayPool();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ArrayPool", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ArrayPool(ArrayPool&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ArrayPool", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ArrayPool(ArrayPool const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17749 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::ENet::ArrayPool, 0x10>, "Size mismatch!");

} // namespace ENet
NEED_NO_BOX(::ENet::ArrayPool);
DEFINE_IL2CPP_ARG_TYPE(::ENet::ArrayPool*, "ENet", "ArrayPool");
