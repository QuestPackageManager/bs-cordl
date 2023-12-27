#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(DisposerReplySink)
namespace System::Runtime::Remoting::Messaging {
class IMessageSink;
}
namespace System {
class IDisposable;
}
namespace System::Runtime::Remoting::Messaging {
class IMessageCtrl;
}
namespace System::Runtime::Remoting::Messaging {
class IMessage;
}
// Forward declare root types
namespace System::Runtime::Remoting {
class DisposerReplySink;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Remoting::DisposerReplySink);
// Type: System.Runtime.Remoting::DisposerReplySink
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Runtime::Remoting {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3076))
// CS Name: ::System.Runtime.Remoting::DisposerReplySink*
class CORDL_TYPE DisposerReplySink : public ::System::Object {
public:
  // Declarations
  /// @brief Field _next, offset 0x10, size 0x8
  __declspec(property(get = __get__next, put = __set__next))::System::Runtime::Remoting::Messaging::IMessageSink* _next;

  /// @brief Field _disposable, offset 0x18, size 0x8
  __declspec(property(get = __get__disposable, put = __set__disposable))::System::IDisposable* _disposable;

  /// @brief Convert operator to "::System::Runtime::Remoting::Messaging::IMessageSink"
  constexpr operator ::System::Runtime::Remoting::Messaging::IMessageSink*() noexcept;

  constexpr ::System::Runtime::Remoting::Messaging::IMessageSink*& __get__next();

  constexpr ::cordl_internals::to_const_pointer<::System::Runtime::Remoting::Messaging::IMessageSink*> const& __get__next() const;

  constexpr void __set__next(::System::Runtime::Remoting::Messaging::IMessageSink* value);

  constexpr ::System::IDisposable*& __get__disposable();

  constexpr ::cordl_internals::to_const_pointer<::System::IDisposable*> const& __get__disposable() const;

  constexpr void __set__disposable(::System::IDisposable* value);

  static inline ::System::Runtime::Remoting::DisposerReplySink* New_ctor(::System::Runtime::Remoting::Messaging::IMessageSink* next, ::System::IDisposable* disposable);

  /// @brief Method .ctor addr 0x249435c size 0x2c virtual false final false
  inline void _ctor(::System::Runtime::Remoting::Messaging::IMessageSink* next, ::System::IDisposable* disposable);

  /// @brief Method SyncProcessMessage addr 0x2494388 size 0x11c virtual true final true
  inline ::System::Runtime::Remoting::Messaging::IMessage* SyncProcessMessage(::System::Runtime::Remoting::Messaging::IMessage* msg);

  /// @brief Method AsyncProcessMessage addr 0x24944a4 size 0x40 virtual true final true
  inline ::System::Runtime::Remoting::Messaging::IMessageCtrl* AsyncProcessMessage(::System::Runtime::Remoting::Messaging::IMessage* msg,
                                                                                   ::System::Runtime::Remoting::Messaging::IMessageSink* replySink);

  // Ctor Parameters [CppParam { name: "", ty: "DisposerReplySink", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DisposerReplySink(DisposerReplySink&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DisposerReplySink", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DisposerReplySink(DisposerReplySink const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DisposerReplySink();

public:
  /// @brief Field _next, offset: 0x10, size: 0x8, def value: None
  ::System::Runtime::Remoting::Messaging::IMessageSink* ____next;

  /// @brief Field _disposable, offset: 0x18, size: 0x8, def value: None
  ::System::IDisposable* ____disposable;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::Remoting::DisposerReplySink, 0x20>, "Size mismatch!");

} // namespace System::Runtime::Remoting
NEED_NO_BOX(::System::Runtime::Remoting::DisposerReplySink);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Remoting::DisposerReplySink*, "System.Runtime.Remoting", "DisposerReplySink");
