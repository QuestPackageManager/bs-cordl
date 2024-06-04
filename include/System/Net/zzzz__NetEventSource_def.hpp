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
class __NetEventSource__Keywords;
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
class __NetEventSource__Keywords;
}
// Write type traits
MARK_REF_PTR_T(::System::Net::NetEventSource);
MARK_REF_PTR_T(::System::Net::__NetEventSource__Keywords);
// Type: ::Keywords
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Net {
// Is value type: false
// CS Name: ::NetEventSource::Keywords*
class CORDL_TYPE __NetEventSource__Keywords : public ::System::Object {
public:
  // Declarations
protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __NetEventSource__Keywords();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__NetEventSource__Keywords", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __NetEventSource__Keywords(__NetEventSource__Keywords&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__NetEventSource__Keywords", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __NetEventSource__Keywords(__NetEventSource__Keywords const&) = delete;

  /// @brief Field Debug value: static_cast<int64_t>(0x2)
  static ::System::Diagnostics::Tracing::EventKeywords const Debug;

  /// @brief Field Default value: static_cast<int64_t>(0x1)
  static ::System::Diagnostics::Tracing::EventKeywords const Default;

  /// @brief Field EnterExit value: static_cast<int64_t>(0x4)
  static ::System::Diagnostics::Tracing::EventKeywords const EnterExit;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::__NetEventSource__Keywords, 0x10>, "Size mismatch!");

} // namespace System::Net
// Type: System.Net::NetEventSource
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Net {
// Is value type: false
// CS Name: ::System.Net::NetEventSource*
class CORDL_TYPE NetEventSource : public ::System::Diagnostics::Tracing::EventSource {
public:
  // Declarations
  using Keywords = ::System::Net::__NetEventSource__Keywords;

  /// @brief Field Log, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Log, put = setStaticF_Log))::System::Net::NetEventSource* Log;

  /// @brief Method Associate, addr 0x2fdc6bc, size 0xd0, virtual false, abstract: false, final false
  static inline void Associate(::System::Object* first, ::System::Object* second, ::StringW memberName);

  /// @brief Method Associate, addr 0x2fdc78c, size 0x88, virtual false, abstract: false, final false
  inline void Associate(::StringW thisOrContextObject, ::StringW memberName, ::StringW first, ::StringW second);

  /// @brief Method CriticalFailure, addr 0x2fdc640, size 0x7c, virtual false, abstract: false, final false
  inline void CriticalFailure(::StringW thisOrContextObject, ::StringW memberName, ::StringW message);

  /// @brief Method Enter, addr 0x2fdbbdc, size 0x7c, virtual false, abstract: false, final false
  inline void Enter(::StringW thisOrContextObject, ::StringW memberName, ::StringW parameters);

  /// @brief Method Enter, addr 0x2fdc120, size 0x11c, virtual false, abstract: false, final false
  static inline void Enter(::System::Object* thisOrContextObject, ::System::Object* arg0, ::System::Object* arg1, ::System::Object* arg2, ::StringW memberName);

  /// @brief Method Enter, addr 0x2fdbc58, size 0xe8, virtual false, abstract: false, final false
  static inline void Enter(::System::Object* thisOrContextObject, ::System::Object* arg0, ::StringW memberName);

  /// @brief Method Enter, addr 0x2fdb6c0, size 0xf0, virtual false, abstract: false, final false
  static inline void Enter(::System::Object* thisOrContextObject, ::System::FormattableString* formattableString, ::StringW memberName);

  /// @brief Method Error, addr 0x2fdc4f4, size 0xd0, virtual false, abstract: false, final false
  static inline void Error(::System::Object* thisOrContextObject, ::System::Object* message, ::StringW memberName);

  /// @brief Method ErrorMessage, addr 0x2fdc5c4, size 0x7c, virtual false, abstract: false, final false
  inline void ErrorMessage(::StringW thisOrContextObject, ::StringW memberName, ::StringW message);

  /// @brief Method Exit, addr 0x2fdc32c, size 0x7c, virtual false, abstract: false, final false
  inline void Exit(::StringW thisOrContextObject, ::StringW memberName, ::StringW result);

  /// @brief Method Exit, addr 0x2fdc3a8, size 0xd0, virtual false, abstract: false, final false
  static inline void Exit(::System::Object* thisOrContextObject, ::System::Object* arg0, ::StringW memberName);

  /// @brief Method Exit, addr 0x2fdc23c, size 0xf0, virtual false, abstract: false, final false
  static inline void Exit(::System::Object* thisOrContextObject, ::System::FormattableString* formattableString, ::StringW memberName);

  /// @brief Method Fail, addr 0x2fda23c, size 0xd0, virtual false, abstract: false, final false
  static inline void Fail(::System::Object* thisOrContextObject, ::System::Object* message, ::StringW memberName);

  /// @brief Method Format, addr 0x2fdb89c, size 0x340, virtual false, abstract: false, final false
  static inline ::StringW Format(::System::FormattableString* s);

  /// @brief Method Format, addr 0x2fdbd40, size 0x3e0, virtual false, abstract: false, final false
  static inline ::System::Object* Format(::System::Object* value);

  /// @brief Method GetHashCode, addr 0x2fdca20, size 0x14, virtual false, abstract: false, final false
  static inline int32_t GetHashCode(::System::Object* value);

  /// @brief Method IdOf, addr 0x2fdb7b0, size 0xec, virtual false, abstract: false, final false
  static inline ::StringW IdOf(::System::Object* value);

  /// @brief Method Info, addr 0x2fdc478, size 0x7c, virtual false, abstract: false, final false
  inline void Info(::StringW thisOrContextObject, ::StringW memberName, ::StringW message);

  /// @brief Method Info, addr 0x2fda82c, size 0xf0, virtual false, abstract: false, final false
  static inline void Info(::System::Object* thisOrContextObject, ::System::FormattableString* formattableString, ::StringW memberName);

  /// @brief Method Info, addr 0x2fda91c, size 0xd0, virtual false, abstract: false, final false
  static inline void Info(::System::Object* thisOrContextObject, ::System::Object* message, ::StringW memberName);

  static inline ::System::Net::NetEventSource* New_ctor();

  /// @brief Method WriteEvent, addr 0x2fdc814, size 0x20c, virtual false, abstract: false, final false
  inline void WriteEvent(int32_t eventId, ::StringW arg1, ::StringW arg2, ::StringW arg3, ::StringW arg4);

  /// @brief Method .ctor, addr 0x2fdca34, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::Net::NetEventSource* getStaticF_Log();

  /// @brief Method get_IsEnabled, addr 0x2fda7c8, size 0x64, virtual false, abstract: false, final false
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

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::NetEventSource, 0x18>, "Size mismatch!");

} // namespace System::Net
NEED_NO_BOX(::System::Net::NetEventSource);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::NetEventSource*, "System.Net", "NetEventSource");
NEED_NO_BOX(::System::Net::__NetEventSource__Keywords);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::__NetEventSource__Keywords*, "System.Net", "NetEventSource/Keywords");
