#pragma once
// IWYU pragma private; include "System/Net/NetEventSource.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Diagnostics/Tracing/zzzz__EventKeywords_def.hpp"
#include "System/Diagnostics/Tracing/zzzz__EventSource_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(NetEventSource)
namespace System::Net {
class NetEventSource_Keywords;
}
namespace System {
class FormattableString;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Net {
class NetEventSource;
}
namespace System::Net {
class NetEventSource_Keywords;
}
// Write type traits
MARK_REF_PTR_T(::System::Net::NetEventSource);
MARK_REF_PTR_T(::System::Net::NetEventSource_Keywords);
// Dependencies System.Diagnostics.Tracing.EventKeywords, System.Object
namespace System::Net {
// Is value type: false
// CS Name: System.Net.NetEventSource/Keywords
class CORDL_TYPE NetEventSource_Keywords : public ::System::Object {
public:
  // Declarations
protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NetEventSource_Keywords();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NetEventSource_Keywords", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NetEventSource_Keywords(NetEventSource_Keywords&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NetEventSource_Keywords", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NetEventSource_Keywords(NetEventSource_Keywords const&) = delete;

  /// @brief Field Debug value: I64(2)
  static ::System::Diagnostics::Tracing::EventKeywords const Debug;

  /// @brief Field Default value: I64(1)
  static ::System::Diagnostics::Tracing::EventKeywords const Default;

  /// @brief Field EnterExit value: I64(4)
  static ::System::Diagnostics::Tracing::EventKeywords const EnterExit;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9539 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::NetEventSource_Keywords, 0x10>, "Size mismatch!");

} // namespace System::Net
// Dependencies System.Diagnostics.Tracing.EventSource
namespace System::Net {
// Is value type: false
// CS Name: System.Net.NetEventSource
class CORDL_TYPE NetEventSource : public ::System::Diagnostics::Tracing::EventSource {
public:
  // Declarations
  using Keywords = ::System::Net::NetEventSource_Keywords;

  /// @brief Field Log, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_Log, put = setStaticF_Log)) ::System::Net::NetEventSource* Log;

  /// @brief Method Associate, addr 0x448ae80, size 0xd0, virtual false, abstract: false, final false
  static inline void Associate(::System::Object* first, ::System::Object* second, ::StringW memberName);

  /// @brief Method Associate, addr 0x448af50, size 0x88, virtual false, abstract: false, final false
  inline void Associate(::StringW thisOrContextObject, ::StringW memberName, ::StringW first, ::StringW second);

  /// @brief Method CriticalFailure, addr 0x448ae04, size 0x7c, virtual false, abstract: false, final false
  inline void CriticalFailure(::StringW thisOrContextObject, ::StringW memberName, ::StringW message);

  /// @brief Method Enter, addr 0x448a39c, size 0x7c, virtual false, abstract: false, final false
  inline void Enter(::StringW thisOrContextObject, ::StringW memberName, ::StringW parameters);

  /// @brief Method Enter, addr 0x448a8e4, size 0x11c, virtual false, abstract: false, final false
  static inline void Enter(::System::Object* thisOrContextObject, ::System::Object* arg0, ::System::Object* arg1, ::System::Object* arg2, ::StringW memberName);

  /// @brief Method Enter, addr 0x448a418, size 0xe8, virtual false, abstract: false, final false
  static inline void Enter(::System::Object* thisOrContextObject, ::System::Object* arg0, ::StringW memberName);

  /// @brief Method Enter, addr 0x4489e6c, size 0xf0, virtual false, abstract: false, final false
  static inline void Enter(::System::Object* thisOrContextObject, ::System::FormattableString* formattableString, ::StringW memberName);

  /// @brief Method Error, addr 0x448acb8, size 0xd0, virtual false, abstract: false, final false
  static inline void Error(::System::Object* thisOrContextObject, ::System::Object* message, ::StringW memberName);

  /// @brief Method ErrorMessage, addr 0x448ad88, size 0x7c, virtual false, abstract: false, final false
  inline void ErrorMessage(::StringW thisOrContextObject, ::StringW memberName, ::StringW message);

  /// @brief Method Exit, addr 0x448aaf0, size 0x7c, virtual false, abstract: false, final false
  inline void Exit(::StringW thisOrContextObject, ::StringW memberName, ::StringW result);

  /// @brief Method Exit, addr 0x448ab6c, size 0xd0, virtual false, abstract: false, final false
  static inline void Exit(::System::Object* thisOrContextObject, ::System::Object* arg0, ::StringW memberName);

  /// @brief Method Exit, addr 0x448aa00, size 0xf0, virtual false, abstract: false, final false
  static inline void Exit(::System::Object* thisOrContextObject, ::System::FormattableString* formattableString, ::StringW memberName);

  /// @brief Method Fail, addr 0x4488a34, size 0xd0, virtual false, abstract: false, final false
  static inline void Fail(::System::Object* thisOrContextObject, ::System::Object* message, ::StringW memberName);

  /// @brief Method Format, addr 0x448a044, size 0x358, virtual false, abstract: false, final false
  static inline ::StringW Format(::System::FormattableString* s);

  /// @brief Method Format, addr 0x448a500, size 0x3e4, virtual false, abstract: false, final false
  static inline ::System::Object* Format(::System::Object* value);

  /// @brief Method GetHashCode, addr 0x448b1e4, size 0x14, virtual false, abstract: false, final false
  static inline int32_t GetHashCode(::System::Object* value);

  /// @brief Method IdOf, addr 0x4489f5c, size 0xe8, virtual false, abstract: false, final false
  static inline ::StringW IdOf(::System::Object* value);

  /// @brief Method Info, addr 0x448ac3c, size 0x7c, virtual false, abstract: false, final false
  inline void Info(::StringW thisOrContextObject, ::StringW memberName, ::StringW message);

  /// @brief Method Info, addr 0x4489010, size 0xf0, virtual false, abstract: false, final false
  static inline void Info(::System::Object* thisOrContextObject, ::System::FormattableString* formattableString, ::StringW memberName);

  /// @brief Method Info, addr 0x4489100, size 0xd0, virtual false, abstract: false, final false
  static inline void Info(::System::Object* thisOrContextObject, ::System::Object* message, ::StringW memberName);

  static inline ::System::Net::NetEventSource* New_ctor();

  /// @brief Method WriteEvent, addr 0x448afd8, size 0x20c, virtual false, abstract: false, final false
  inline void WriteEvent(int32_t eventId, ::StringW arg1, ::StringW arg2, ::StringW arg3, ::StringW arg4);

  /// @brief Method .ctor, addr 0x448b1f8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::Net::NetEventSource* getStaticF_Log();

  /// @brief Method get_IsEnabled, addr 0x4488fac, size 0x64, virtual false, abstract: false, final false
  static inline bool get_IsEnabled();

  static inline void setStaticF_Log(::System::Net::NetEventSource* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NetEventSource();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NetEventSource", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NetEventSource(NetEventSource&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NetEventSource", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NetEventSource(NetEventSource const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9540 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::NetEventSource, 0x18>, "Size mismatch!");

} // namespace System::Net
NEED_NO_BOX(::System::Net::NetEventSource);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::NetEventSource*, "System.Net", "NetEventSource");
NEED_NO_BOX(::System::Net::NetEventSource_Keywords);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::NetEventSource_Keywords*, "System.Net", "NetEventSource/Keywords");
