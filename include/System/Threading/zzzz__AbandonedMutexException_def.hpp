#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__SystemException_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(AbandonedMutexException)
namespace System::Threading {
class Mutex;
}
namespace System::Threading {
class WaitHandle;
}
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
// Forward declare root types
namespace System::Threading {
class AbandonedMutexException;
}
// Write type traits
MARK_REF_PTR_T(::System::Threading::AbandonedMutexException);
// Type: System.Threading::AbandonedMutexException
// SizeInfo { instance_size: 152, native_size: -1, calculated_instance_size: 152, calculated_native_size: 152, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Threading {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2481))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2656))
// CS Name: ::System.Threading::AbandonedMutexException*
class CORDL_TYPE AbandonedMutexException : public ::System::SystemException {
public:
  // Declarations
  /// @brief Field _mutexIndex, offset 0x8c, size 0x4
  __declspec(property(get = __get__mutexIndex, put = __set__mutexIndex)) int32_t _mutexIndex;

  /// @brief Field _mutex, offset 0x90, size 0x8
  __declspec(property(get = __get__mutex, put = __set__mutex))::System::Threading::Mutex* _mutex;

  constexpr int32_t& __get__mutexIndex();

  constexpr int32_t const& __get__mutexIndex() const;

  constexpr void __set__mutexIndex(int32_t value);

  constexpr ::System::Threading::Mutex*& __get__mutex();

  constexpr ::cordl_internals::to_const_pointer<::System::Threading::Mutex*> const& __get__mutex() const;

  constexpr void __set__mutex(::System::Threading::Mutex* value);

  static inline ::System::Threading::AbandonedMutexException* New_ctor();

  /// @brief Method .ctor, addr 0x260fa5c, size 0x64, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::Threading::AbandonedMutexException* New_ctor(int32_t location, ::System::Threading::WaitHandle* handle);

  /// @brief Method .ctor, addr 0x260fac0, size 0xb8, virtual false, abstract: false, final false
  inline void _ctor(int32_t location, ::System::Threading::WaitHandle* handle);

  static inline ::System::Threading::AbandonedMutexException* New_ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method .ctor, addr 0x260fbe4, size 0x10, virtual false, abstract: false, final false
  inline void _ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method SetupException, addr 0x260fb78, size 0x6c, virtual false, abstract: false, final false
  inline void SetupException(int32_t location, ::System::Threading::WaitHandle* handle);

  // Ctor Parameters [CppParam { name: "", ty: "AbandonedMutexException", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AbandonedMutexException(AbandonedMutexException&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AbandonedMutexException", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AbandonedMutexException(AbandonedMutexException const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AbandonedMutexException();

public:
  /// @brief Field _mutexIndex, offset: 0x8c, size: 0x4, def value: None
  int32_t ____mutexIndex;

  /// @brief Field _mutex, offset: 0x90, size: 0x8, def value: None
  ::System::Threading::Mutex* ____mutex;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Threading::AbandonedMutexException, 0x98>, "Size mismatch!");

static_assert(offsetof(::System::Threading::AbandonedMutexException, ____mutexIndex) == 0x8c, "Offset mismatch!");

static_assert(offsetof(::System::Threading::AbandonedMutexException, ____mutex) == 0x90, "Offset mismatch!");

} // namespace System::Threading
NEED_NO_BOX(::System::Threading::AbandonedMutexException);
DEFINE_IL2CPP_ARG_TYPE(::System::Threading::AbandonedMutexException*, "System.Threading", "AbandonedMutexException");
