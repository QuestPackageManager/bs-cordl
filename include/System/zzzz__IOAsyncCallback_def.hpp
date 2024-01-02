#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(IOAsyncCallback)
namespace System {
class Object;
}
namespace System {
class IOAsyncResult;
}
// Forward declare root types
namespace System {
class IOAsyncCallback;
}
// Write type traits
MARK_REF_PTR_T(::System::IOAsyncCallback);
// Type: System::IOAsyncCallback
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8894))
// CS Name: ::System::IOAsyncCallback*
class CORDL_TYPE IOAsyncCallback : public ::System::MulticastDelegate {
public:
  // Declarations
  static inline ::System::IOAsyncCallback* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x294d4b8, size 0x12c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

  /// @brief Method Invoke, addr 0x294d5e4, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(::System::IOAsyncResult* ioares);

  // Ctor Parameters [CppParam { name: "", ty: "IOAsyncCallback", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IOAsyncCallback(IOAsyncCallback&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IOAsyncCallback", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IOAsyncCallback(IOAsyncCallback const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IOAsyncCallback();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::IOAsyncCallback, 0x80>, "Size mismatch!");

} // namespace System
NEED_NO_BOX(::System::IOAsyncCallback);
DEFINE_IL2CPP_ARG_TYPE(::System::IOAsyncCallback*, "System", "IOAsyncCallback");
