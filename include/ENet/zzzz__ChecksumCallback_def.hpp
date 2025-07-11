#pragma once
// IWYU pragma private; include "ENet/ChecksumCallback.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ChecksumCallback)
namespace System {
class AsyncCallback;
}
namespace System {
class IAsyncResult;
}
namespace System {
struct IntPtr;
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
// Dependencies System.MulticastDelegate
namespace ENet {
// Is value type: false
// CS Name: ENet.ChecksumCallback
class CORDL_TYPE ChecksumCallback : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x3aa2a8c, size 0xb8, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::System::IntPtr buffers, int32_t bufferCount, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x3aa2b44, size 0x28, virtual true, abstract: false, final false
  inline uint64_t EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x3aa2a78, size 0x14, virtual true, abstract: false, final false
  inline uint64_t Invoke(::System::IntPtr buffers, int32_t bufferCount);

  static inline ::ENet::ChecksumCallback* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x3aa29ec, size 0x8c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ChecksumCallback();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ChecksumCallback", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ChecksumCallback(ChecksumCallback&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ChecksumCallback", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ChecksumCallback(ChecksumCallback const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17750 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::ENet::ChecksumCallback, 0x80>, "Size mismatch!");

} // namespace ENet
NEED_NO_BOX(::ENet::ChecksumCallback);
DEFINE_IL2CPP_ARG_TYPE(::ENet::ChecksumCallback*, "ENet", "ChecksumCallback");
