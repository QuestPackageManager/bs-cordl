#pragma once
// IWYU pragma private; include "System/Diagnostics/TraceInternal.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TraceInternal)
namespace System::Diagnostics {
class TraceListenerCollection;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Diagnostics {
class TraceInternal;
}
// Write type traits
MARK_REF_PTR_T(::System::Diagnostics::TraceInternal);
// Type: System.Diagnostics::TraceInternal
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System::Diagnostics {
// Is value type: false
// CS Name: ::System.Diagnostics::TraceInternal*
class CORDL_TYPE TraceInternal : public ::System::Object {
public:
  // Declarations
  /// @brief Field appName, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_appName, put = setStaticF_appName)) ::StringW appName;

  /// @brief Field autoFlush, offset 0xffffffff, size 0x1
  static __declspec(property(get = getStaticF_autoFlush, put = setStaticF_autoFlush)) bool autoFlush;

  /// @brief Field critSec, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_critSec, put = setStaticF_critSec)) ::System::Object* critSec;

  /// @brief Field indentLevel, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_indentLevel, put = setStaticF_indentLevel)) int32_t indentLevel;

  /// @brief Field indentSize, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_indentSize, put = setStaticF_indentSize)) int32_t indentSize;

  /// @brief Field listeners, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_listeners, put = setStaticF_listeners)) ::System::Diagnostics::TraceListenerCollection* listeners;

  /// @brief Method InitializeSettings, addr 0x43b51ac, size 0x4, virtual false, abstract: false, final false
  static inline void InitializeSettings();

  static inline ::StringW getStaticF_appName();

  static inline bool getStaticF_autoFlush();

  static inline ::System::Object* getStaticF_critSec();

  static inline int32_t getStaticF_indentLevel();

  static inline int32_t getStaticF_indentSize();

  static inline ::System::Diagnostics::TraceListenerCollection* getStaticF_listeners();

  /// @brief Method get_AutoFlush, addr 0x43b4a0c, size 0x60, virtual false, abstract: false, final false
  static inline bool get_AutoFlush();

  /// @brief Method get_IndentLevel, addr 0x43b5474, size 0x58, virtual false, abstract: false, final false
  static inline int32_t get_IndentLevel();

  /// @brief Method get_IndentSize, addr 0x43b54cc, size 0x60, virtual false, abstract: false, final false
  static inline int32_t get_IndentSize();

  /// @brief Method get_Listeners, addr 0x43b477c, size 0x244, virtual false, abstract: false, final false
  static inline ::System::Diagnostics::TraceListenerCollection* get_Listeners();

  static inline void setStaticF_appName(::StringW value);

  static inline void setStaticF_autoFlush(bool value);

  static inline void setStaticF_critSec(::System::Object* value);

  static inline void setStaticF_indentLevel(int32_t value);

  static inline void setStaticF_indentSize(int32_t value);

  static inline void setStaticF_listeners(::System::Diagnostics::TraceListenerCollection* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TraceInternal();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TraceInternal", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TraceInternal(TraceInternal&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TraceInternal", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TraceInternal(TraceInternal const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9227 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Diagnostics::TraceInternal, 0x10>, "Size mismatch!");

} // namespace System::Diagnostics
NEED_NO_BOX(::System::Diagnostics::TraceInternal);
DEFINE_IL2CPP_ARG_TYPE(::System::Diagnostics::TraceInternal*, "System.Diagnostics", "TraceInternal");
