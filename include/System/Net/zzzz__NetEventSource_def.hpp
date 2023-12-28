#pragma once
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
class Object;
}
namespace System {
class FormattableString;
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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(3744))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9023))
// CS Name: ::NetEventSource::Keywords*
class CORDL_TYPE __NetEventSource__Keywords : public ::System::Object {
public:
  // Declarations
  // Ctor Parameters [CppParam { name: "", ty: "__NetEventSource__Keywords", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __NetEventSource__Keywords(__NetEventSource__Keywords&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__NetEventSource__Keywords", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __NetEventSource__Keywords(__NetEventSource__Keywords const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __NetEventSource__Keywords();

public:
  /// @brief Field Default value: static_cast<int64_t>(0x1)
  static ::System::Diagnostics::Tracing::EventKeywords const Default;

  /// @brief Field Debug value: static_cast<int64_t>(0x2)
  static ::System::Diagnostics::Tracing::EventKeywords const Debug;

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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3747))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9024))
// CS Name: ::System.Net::NetEventSource*
class CORDL_TYPE NetEventSource : public ::System::Diagnostics::Tracing::EventSource {
public:
  // Declarations
  using Keywords = ::System::Net::__NetEventSource__Keywords;

  /// @brief Field Log, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Log, put = setStaticF_Log))::System::Net::NetEventSource* Log;

  static inline void setStaticF_Log(::System::Net::NetEventSource* value);

  static inline ::System::Net::NetEventSource* getStaticF_Log();

  /// @brief Method Enter addr 0x2988e74 size 0xf0 virtual false final false
  static inline void Enter(::System::Object* thisOrContextObject, ::System::FormattableString* formattableString, ::StringW memberName);

  /// @brief Method Enter addr 0x298940c size 0xe8 virtual false final false
  static inline void Enter(::System::Object* thisOrContextObject, ::System::Object* arg0, ::StringW memberName);

  /// @brief Method Enter addr 0x29898d4 size 0x11c virtual false final false
  static inline void Enter(::System::Object* thisOrContextObject, ::System::Object* arg0, ::System::Object* arg1, ::System::Object* arg2, ::StringW memberName);

  /// @brief Method Enter addr 0x2989390 size 0x7c virtual false final false
  inline void Enter(::StringW thisOrContextObject, ::StringW memberName, ::StringW parameters);

  /// @brief Method Exit addr 0x29899f0 size 0xf0 virtual false final false
  static inline void Exit(::System::Object* thisOrContextObject, ::System::FormattableString* formattableString, ::StringW memberName);

  /// @brief Method Exit addr 0x2989b5c size 0xd0 virtual false final false
  static inline void Exit(::System::Object* thisOrContextObject, ::System::Object* arg0, ::StringW memberName);

  /// @brief Method Exit addr 0x2989ae0 size 0x7c virtual false final false
  inline void Exit(::StringW thisOrContextObject, ::StringW memberName, ::StringW result);

  /// @brief Method Info addr 0x2987fe0 size 0xf0 virtual false final false
  static inline void Info(::System::Object* thisOrContextObject, ::System::FormattableString* formattableString, ::StringW memberName);

  /// @brief Method Info addr 0x29880d0 size 0xd0 virtual false final false
  static inline void Info(::System::Object* thisOrContextObject, ::System::Object* message, ::StringW memberName);

  /// @brief Method Info addr 0x2989c2c size 0x7c virtual false final false
  inline void Info(::StringW thisOrContextObject, ::StringW memberName, ::StringW message);

  /// @brief Method Error addr 0x2989ca8 size 0xd0 virtual false final false
  static inline void Error(::System::Object* thisOrContextObject, ::System::Object* message, ::StringW memberName);

  /// @brief Method ErrorMessage addr 0x2989d78 size 0x7c virtual false final false
  inline void ErrorMessage(::StringW thisOrContextObject, ::StringW memberName, ::StringW message);

  /// @brief Method Fail addr 0x29879f0 size 0xd0 virtual false final false
  static inline void Fail(::System::Object* thisOrContextObject, ::System::Object* message, ::StringW memberName);

  /// @brief Method CriticalFailure addr 0x2989df4 size 0x7c virtual false final false
  inline void CriticalFailure(::StringW thisOrContextObject, ::StringW memberName, ::StringW message);

  /// @brief Method Associate addr 0x2989e70 size 0xd0 virtual false final false
  static inline void Associate(::System::Object* first, ::System::Object* second, ::StringW memberName);

  /// @brief Method Associate addr 0x2989f40 size 0x88 virtual false final false
  inline void Associate(::StringW thisOrContextObject, ::StringW memberName, ::StringW first, ::StringW second);

  /// @brief Method get_IsEnabled addr 0x2987f7c size 0x64 virtual false final false
  static inline bool get_IsEnabled();

  /// @brief Method IdOf addr 0x2988f64 size 0xec virtual false final false
  static inline ::StringW IdOf(::System::Object* value);

  /// @brief Method GetHashCode addr 0x298a1d4 size 0x14 virtual false final false
  static inline int32_t GetHashCode(::System::Object* value);

  /// @brief Method Format addr 0x29894f4 size 0x3e0 virtual false final false
  static inline ::System::Object* Format(::System::Object* value);

  /// @brief Method Format addr 0x2989050 size 0x340 virtual false final false
  static inline ::StringW Format(::System::FormattableString* s);

  /// @brief Method WriteEvent addr 0x2989fc8 size 0x20c virtual false final false
  inline void WriteEvent(int32_t eventId, ::StringW arg1, ::StringW arg2, ::StringW arg3, ::StringW arg4);

  static inline ::System::Net::NetEventSource* New_ctor();

  /// @brief Method .ctor addr 0x298a1e8 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "NetEventSource", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NetEventSource(NetEventSource&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NetEventSource", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NetEventSource(NetEventSource const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NetEventSource();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::NetEventSource, 0x18>, "Size mismatch!");

} // namespace System::Net
NEED_NO_BOX(::System::Net::NetEventSource);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::NetEventSource*, "System.Net", "NetEventSource");
NEED_NO_BOX(::System::Net::__NetEventSource__Keywords);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::__NetEventSource__Keywords*, "System.Net", "NetEventSource/Keywords");
