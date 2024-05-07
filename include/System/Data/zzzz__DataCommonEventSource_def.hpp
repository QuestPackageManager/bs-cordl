#pragma once
// IWYU pragma private; include "System/Data/DataCommonEventSource.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Diagnostics/Tracing/zzzz__EventSource_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DataCommonEventSource)
// Forward declare root types
namespace System::Data {
class DataCommonEventSource;
}
// Write type traits
MARK_REF_PTR_T(::System::Data::DataCommonEventSource);
// Type: System.Data::DataCommonEventSource
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Data {
// Is value type: false
// CS Name: ::System.Data::DataCommonEventSource*
class CORDL_TYPE DataCommonEventSource : public ::System::Diagnostics::Tracing::EventSource {
public:
  // Declarations
  /// @brief Field Log, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Log, put = setStaticF_Log))::System::Data::DataCommonEventSource* Log;

  /// @brief Field s_nextScopeId, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_nextScopeId, put = setStaticF_s_nextScopeId)) int64_t s_nextScopeId;

  /// @brief Method EnterScope, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1> inline int64_t EnterScope(::StringW format, T1 arg1);

  /// @brief Method EnterScope, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1, typename T2> inline int64_t EnterScope(::StringW format, T1 arg1, T2 arg2);

  /// @brief Method EnterScope, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1, typename T2, typename T3> inline int64_t EnterScope(::StringW format, T1 arg1, T2 arg2, T3 arg3);

  /// @brief Method EnterScope, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1, typename T2, typename T3, typename T4> inline int64_t EnterScope(::StringW format, T1 arg1, T2 arg2, T3 arg3, T4 arg4);

  /// @brief Method EnterScope, addr 0x2c7351c, size 0xc4, virtual false, abstract: false, final false
  inline int64_t EnterScope(::StringW message);

  /// @brief Method ExitScope, addr 0x2c735e0, size 0x10, virtual false, abstract: false, final false
  inline void ExitScope(int64_t scopeId);

  static inline ::System::Data::DataCommonEventSource* New_ctor();

  /// @brief Method Trace, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T0> inline void Trace(::StringW format, T0 arg0);

  /// @brief Method Trace, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T0, typename T1> inline void Trace(::StringW format, T0 arg0, T1 arg1);

  /// @brief Method Trace, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T0, typename T1, typename T2> inline void Trace(::StringW format, T0 arg0, T1 arg1, T2 arg2);

  /// @brief Method Trace, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T0, typename T1, typename T2, typename T3> inline void Trace(::StringW format, T0 arg0, T1 arg1, T2 arg2, T3 arg3);

  /// @brief Method Trace, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T0, typename T1, typename T2, typename T3, typename T4> inline void Trace(::StringW format, T0 arg0, T1 arg1, T2 arg2, T3 arg3, T4 arg4);

  /// @brief Method Trace, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
  inline void Trace(::StringW format, T0 arg0, T1 arg1, T2 arg2, T3 arg3, T4 arg4, T5 arg5, T6 arg6);

  /// @brief Method Trace, addr 0x2c7350c, size 0x10, virtual false, abstract: false, final false
  inline void Trace(::StringW message);

  /// @brief Method .ctor, addr 0x2c735f0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::Data::DataCommonEventSource* getStaticF_Log();

  static inline int64_t getStaticF_s_nextScopeId();

  static inline void setStaticF_Log(::System::Data::DataCommonEventSource* value);

  static inline void setStaticF_s_nextScopeId(int64_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DataCommonEventSource();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DataCommonEventSource", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DataCommonEventSource(DataCommonEventSource&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DataCommonEventSource", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DataCommonEventSource(DataCommonEventSource const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Data::DataCommonEventSource, 0x18>, "Size mismatch!");

} // namespace System::Data
NEED_NO_BOX(::System::Data::DataCommonEventSource);
DEFINE_IL2CPP_ARG_TYPE(::System::Data::DataCommonEventSource*, "System.Data", "DataCommonEventSource");
