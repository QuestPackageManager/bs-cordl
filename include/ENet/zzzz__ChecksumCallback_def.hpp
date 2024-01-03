#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ChecksumCallback)
namespace System {
class IAsyncResult;
}
namespace System {
class AsyncCallback;
}
namespace System {
class Object;
}
// Forward declare root types
namespace ENet {
class ChecksumCallback;
}
// Write type traits
MARK_REF_PTR_T(::ENet::ChecksumCallback);
// Type: ENet::ChecksumCallback
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace ENet {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15226))
// CS Name: ::ENet::ChecksumCallback*
class CORDL_TYPE ChecksumCallback : public ::System::MulticastDelegate {
public:
  // Declarations
  static inline ::ENet::ChecksumCallback* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x21ef444, size 0xc4, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

  /// @brief Method Invoke, addr 0x21ef508, size 0x14, virtual true, abstract: false, final false
  inline uint64_t Invoke(void* buffers, int32_t bufferCount);

  /// @brief Method BeginInvoke, addr 0x21ef51c, size 0xb4, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(void* buffers, int32_t bufferCount, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x21ef5d0, size 0x28, virtual true, abstract: false, final false
  inline uint64_t EndInvoke(::System::IAsyncResult* result);

  // Ctor Parameters [CppParam { name: "", ty: "ChecksumCallback", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ChecksumCallback(ChecksumCallback&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ChecksumCallback", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ChecksumCallback(ChecksumCallback const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ChecksumCallback();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::ENet::ChecksumCallback, 0x80>, "Size mismatch!");

} // namespace ENet
NEED_NO_BOX(::ENet::ChecksumCallback);
DEFINE_IL2CPP_ARG_TYPE(::ENet::ChecksumCallback*, "ENet", "ChecksumCallback");
