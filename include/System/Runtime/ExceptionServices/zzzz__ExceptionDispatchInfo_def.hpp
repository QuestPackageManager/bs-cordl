#pragma once
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
// Type: System.Runtime.ExceptionServices::ExceptionDispatchInfo
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Runtime::ExceptionServices {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3346))
// CS Name: ::System.Runtime.ExceptionServices::ExceptionDispatchInfo*
class CORDL_TYPE ExceptionDispatchInfo : public ::System::Object {
public:
  // Declarations
  /// @brief Field m_Exception, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Exception, put = __cordl_internal_set_m_Exception))::System::Exception* m_Exception;

  /// @brief Field m_stackTrace, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_stackTrace, put = __cordl_internal_set_m_stackTrace))::System::Object* m_stackTrace;

  __declspec(property(get = get_BinaryStackTraceArray))::System::Object* BinaryStackTraceArray;

  __declspec(property(get = get_SourceException))::System::Exception* SourceException;

  constexpr ::System::Exception*& __cordl_internal_get_m_Exception();

  constexpr ::cordl_internals::to_const_pointer<::System::Exception*> const& __cordl_internal_get_m_Exception() const;

  constexpr void __cordl_internal_set_m_Exception(::System::Exception* value);

  constexpr ::System::Object*& __cordl_internal_get_m_stackTrace();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __cordl_internal_get_m_stackTrace() const;

  constexpr void __cordl_internal_set_m_stackTrace(::System::Object* value);

  static inline ::System::Runtime::ExceptionServices::ExceptionDispatchInfo* New_ctor(::System::Exception* exception);

  /// @brief Method .ctor, addr 0x24faac0, size 0x128, virtual false, abstract: false, final false
  inline void _ctor(::System::Exception* exception);

  /// @brief Method get_BinaryStackTraceArray, addr 0x24fabe8, size 0x8, virtual false, abstract: false, final false
  inline ::System::Object* get_BinaryStackTraceArray();

  /// @brief Method Capture, addr 0x24fa67c, size 0xcc, virtual false, abstract: false, final false
  static inline ::System::Runtime::ExceptionServices::ExceptionDispatchInfo* Capture(::System::Exception* source);

  /// @brief Method get_SourceException, addr 0x24fabf0, size 0x8, virtual false, abstract: false, final false
  inline ::System::Exception* get_SourceException();

  /// @brief Method Throw, addr 0x24fa748, size 0x44, virtual false, abstract: false, final false
  inline void Throw();

  /// @brief Method Throw, addr 0x24fabf8, size 0x18, virtual false, abstract: false, final false
  static inline void Throw(::System::Exception* source);

  // Ctor Parameters [CppParam { name: "", ty: "ExceptionDispatchInfo", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ExceptionDispatchInfo(ExceptionDispatchInfo&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ExceptionDispatchInfo", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ExceptionDispatchInfo(ExceptionDispatchInfo const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ExceptionDispatchInfo();

public:
  /// @brief Field m_Exception, offset: 0x10, size: 0x8, def value: None
  ::System::Exception* ___m_Exception;

  /// @brief Field m_stackTrace, offset: 0x18, size: 0x8, def value: None
  ::System::Object* ___m_stackTrace;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::ExceptionServices::ExceptionDispatchInfo, 0x20>, "Size mismatch!");

static_assert(offsetof(::System::Runtime::ExceptionServices::ExceptionDispatchInfo, ___m_Exception) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::ExceptionServices::ExceptionDispatchInfo, ___m_stackTrace) == 0x18, "Offset mismatch!");

} // namespace System::Runtime::ExceptionServices
NEED_NO_BOX(::System::Runtime::ExceptionServices::ExceptionDispatchInfo);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::ExceptionServices::ExceptionDispatchInfo*, "System.Runtime.ExceptionServices", "ExceptionDispatchInfo");
