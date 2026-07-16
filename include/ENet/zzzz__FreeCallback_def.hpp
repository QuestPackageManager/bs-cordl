#pragma once
// IWYU pragma private; include "ENet/FreeCallback.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
CORDL_MODULE_EXPORT(FreeCallback)
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
class FreeCallback;
}
// Write type traits
MARK_REF_T(::ENet::FreeCallback*);
DEFINE_IL2CPP_CLASS(::ENet::FreeCallback*, "ENet", "FreeCallback");
// Dependencies System.MulticastDelegate
namespace ENet {
// Is value type: false
// CS Name: ENet.FreeCallback
class CORDL_TYPE FreeCallback : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x589380c, size 0x54, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::System::IntPtr memory, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x5893860, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x58937f8, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(::System::IntPtr memory);

  static inline ::ENet::FreeCallback* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x589378c, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FreeCallback();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FreeCallback", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FreeCallback(FreeCallback&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FreeCallback", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FreeCallback(FreeCallback const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21670 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::ENet::FreeCallback) == 0x80, "Size mismatch!");

} // namespace ENet
