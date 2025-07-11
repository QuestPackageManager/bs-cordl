#pragma once
// IWYU pragma private; include "System/Runtime/ExceptionServices/ExceptionDispatchInfo.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(ExceptionDispatchInfo)
namespace System {
class Exception;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Runtime::ExceptionServices {
class ExceptionDispatchInfo;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::ExceptionServices::ExceptionDispatchInfo);
// Dependencies System.Object
namespace System::Runtime::ExceptionServices {
// Is value type: false
// CS Name: System.Runtime.ExceptionServices.ExceptionDispatchInfo
class CORDL_TYPE ExceptionDispatchInfo : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_BinaryStackTraceArray)) ::System::Object* BinaryStackTraceArray;

  __declspec(property(get = get_SourceException)) ::System::Exception* SourceException;

  /// @brief Field m_Exception, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Exception, put = __cordl_internal_set_m_Exception)) ::System::Exception* m_Exception;

  /// @brief Field m_stackTrace, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_stackTrace, put = __cordl_internal_set_m_stackTrace)) ::System::Object* m_stackTrace;

  /// @brief Method Capture, addr 0x3d17c78, size 0xc0, virtual false, abstract: false, final false
  static inline ::System::Runtime::ExceptionServices::ExceptionDispatchInfo* Capture(::System::Exception* source);

  static inline ::System::Runtime::ExceptionServices::ExceptionDispatchInfo* New_ctor(::System::Exception* exception);

  /// @brief Method Throw, addr 0x3d17d40, size 0x44, virtual false, abstract: false, final false
  inline void Throw();

  /// @brief Method Throw, addr 0x3d17d84, size 0x18, virtual false, abstract: false, final false
  static inline void Throw(::System::Exception* source);

  constexpr ::System::Exception* const& __cordl_internal_get_m_Exception() const;

  constexpr ::System::Exception*& __cordl_internal_get_m_Exception();

  constexpr ::System::Object* const& __cordl_internal_get_m_stackTrace() const;

  constexpr ::System::Object*& __cordl_internal_get_m_stackTrace();

  constexpr void __cordl_internal_set_m_Exception(::System::Exception* value);

  constexpr void __cordl_internal_set_m_stackTrace(::System::Object* value);

  /// @brief Method .ctor, addr 0x3d17b48, size 0x128, virtual false, abstract: false, final false
  inline void _ctor(::System::Exception* exception);

  /// @brief Method get_BinaryStackTraceArray, addr 0x3d17c70, size 0x8, virtual false, abstract: false, final false
  inline ::System::Object* get_BinaryStackTraceArray();

  /// @brief Method get_SourceException, addr 0x3d17d38, size 0x8, virtual false, abstract: false, final false
  inline ::System::Exception* get_SourceException();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ExceptionDispatchInfo();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ExceptionDispatchInfo", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ExceptionDispatchInfo(ExceptionDispatchInfo&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ExceptionDispatchInfo", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ExceptionDispatchInfo(ExceptionDispatchInfo const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3349 };

  /// @brief Field m_Exception, offset: 0x10, size: 0x8, def value: None
  ::System::Exception* ___m_Exception;

  /// @brief Field m_stackTrace, offset: 0x18, size: 0x8, def value: None
  ::System::Object* ___m_stackTrace;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Runtime::ExceptionServices::ExceptionDispatchInfo, ___m_Exception) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::ExceptionServices::ExceptionDispatchInfo, ___m_stackTrace) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Runtime::ExceptionServices::ExceptionDispatchInfo, 0x20>, "Size mismatch!");

} // namespace System::Runtime::ExceptionServices
NEED_NO_BOX(::System::Runtime::ExceptionServices::ExceptionDispatchInfo);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::ExceptionServices::ExceptionDispatchInfo*, "System.Runtime.ExceptionServices", "ExceptionDispatchInfo");
