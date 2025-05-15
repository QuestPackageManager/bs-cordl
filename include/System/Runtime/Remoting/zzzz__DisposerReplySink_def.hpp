#pragma once
// IWYU pragma private; include "System/Runtime/Remoting/DisposerReplySink.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/Remoting/Messaging/zzzz__IMessageSink_def.hpp"
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(DisposerReplySink)
namespace System::Runtime::Remoting::Messaging {
class IMessageCtrl;
}
namespace System::Runtime::Remoting::Messaging {
class IMessageSink;
}
namespace System::Runtime::Remoting::Messaging {
class IMessage;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace System::Runtime::Remoting {
class DisposerReplySink;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Remoting::DisposerReplySink);
// Dependencies System.Object, System.Runtime.Remoting.Messaging.IMessageSink
namespace System::Runtime::Remoting {
// Is value type: false
// CS Name: System.Runtime.Remoting.DisposerReplySink
class CORDL_TYPE DisposerReplySink : public ::System::Object {
public:
  // Declarations
  /// @brief Field _disposable, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__disposable, put = __cordl_internal_set__disposable)) ::System::IDisposable* _disposable;

  /// @brief Field _next, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__next, put = __cordl_internal_set__next)) ::System::Runtime::Remoting::Messaging::IMessageSink* _next;

  /// @brief Convert operator to "::System::Runtime::Remoting::Messaging::IMessageSink"
  constexpr operator ::System::Runtime::Remoting::Messaging::IMessageSink*() noexcept;

  /// @brief Method AsyncProcessMessage, addr 0x3cd6728, size 0x38, virtual true, abstract: false, final true
  inline ::System::Runtime::Remoting::Messaging::IMessageCtrl* AsyncProcessMessage(::System::Runtime::Remoting::Messaging::IMessage* msg,
                                                                                   ::System::Runtime::Remoting::Messaging::IMessageSink* replySink);

  static inline ::System::Runtime::Remoting::DisposerReplySink* New_ctor(::System::Runtime::Remoting::Messaging::IMessageSink* next, ::System::IDisposable* disposable);

  /// @brief Method SyncProcessMessage, addr 0x3cd660c, size 0x11c, virtual true, abstract: false, final true
  inline ::System::Runtime::Remoting::Messaging::IMessage* SyncProcessMessage(::System::Runtime::Remoting::Messaging::IMessage* msg);

  constexpr ::System::IDisposable* const& __cordl_internal_get__disposable() const;

  constexpr ::System::IDisposable*& __cordl_internal_get__disposable();

  constexpr ::System::Runtime::Remoting::Messaging::IMessageSink* const& __cordl_internal_get__next() const;

  constexpr ::System::Runtime::Remoting::Messaging::IMessageSink*& __cordl_internal_get__next();

  constexpr void __cordl_internal_set__disposable(::System::IDisposable* value);

  constexpr void __cordl_internal_set__next(::System::Runtime::Remoting::Messaging::IMessageSink* value);

  /// @brief Method .ctor, addr 0x3cd65e0, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(::System::Runtime::Remoting::Messaging::IMessageSink* next, ::System::IDisposable* disposable);

  /// @brief Convert to "::System::Runtime::Remoting::Messaging::IMessageSink"
  constexpr ::System::Runtime::Remoting::Messaging::IMessageSink* i___System__Runtime__Remoting__Messaging__IMessageSink() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DisposerReplySink();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DisposerReplySink", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DisposerReplySink(DisposerReplySink&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DisposerReplySink", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DisposerReplySink(DisposerReplySink const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3075 };

  /// @brief Field _next, offset: 0x10, size: 0x8, def value: None
  ::System::Runtime::Remoting::Messaging::IMessageSink* ____next;

  /// @brief Field _disposable, offset: 0x18, size: 0x8, def value: None
  ::System::IDisposable* ____disposable;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Runtime::Remoting::DisposerReplySink, ____next) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Remoting::DisposerReplySink, ____disposable) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Runtime::Remoting::DisposerReplySink, 0x20>, "Size mismatch!");

} // namespace System::Runtime::Remoting
NEED_NO_BOX(::System::Runtime::Remoting::DisposerReplySink);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Remoting::DisposerReplySink*, "System.Runtime.Remoting", "DisposerReplySink");
