#pragma once
// IWYU pragma private; include "System/Threading/AbandonedMutexException.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__SystemException_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(AbandonedMutexException)
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System::Threading {
class Mutex;
}
namespace System::Threading {
class WaitHandle;
}
// Forward declare root types
namespace System::Threading {
class AbandonedMutexException;
}
// Write type traits
MARK_REF_PTR_T(::System::Threading::AbandonedMutexException);
// Dependencies System.SystemException
namespace System::Threading {
// Is value type: false
// CS Name: System.Threading.AbandonedMutexException
class CORDL_TYPE AbandonedMutexException : public ::System::SystemException {
public:
  // Declarations
  /// @brief Field _mutex, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get__mutex, put = __cordl_internal_set__mutex)) ::System::Threading::Mutex* _mutex;

  /// @brief Field _mutexIndex, offset 0x8c, size 0x4
  __declspec(property(get = __cordl_internal_get__mutexIndex, put = __cordl_internal_set__mutexIndex)) int32_t _mutexIndex;

  static inline ::System::Threading::AbandonedMutexException* New_ctor();

  static inline ::System::Threading::AbandonedMutexException* New_ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  static inline ::System::Threading::AbandonedMutexException* New_ctor(int32_t location, ::System::Threading::WaitHandle* handle);

  /// @brief Method SetupException, addr 0x3e518c0, size 0x6c, virtual false, abstract: false, final false
  inline void SetupException(int32_t location, ::System::Threading::WaitHandle* handle);

  constexpr ::System::Threading::Mutex* const& __cordl_internal_get__mutex() const;

  constexpr ::System::Threading::Mutex*& __cordl_internal_get__mutex();

  constexpr int32_t const& __cordl_internal_get__mutexIndex() const;

  constexpr int32_t& __cordl_internal_get__mutexIndex();

  constexpr void __cordl_internal_set__mutex(::System::Threading::Mutex* value);

  constexpr void __cordl_internal_set__mutexIndex(int32_t value);

  /// @brief Method .ctor, addr 0x3e517a4, size 0x64, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x3e5192c, size 0x10, virtual false, abstract: false, final false
  inline void _ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method .ctor, addr 0x3e51808, size 0xb8, virtual false, abstract: false, final false
  inline void _ctor(int32_t location, ::System::Threading::WaitHandle* handle);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AbandonedMutexException();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AbandonedMutexException", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AbandonedMutexException(AbandonedMutexException&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AbandonedMutexException", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AbandonedMutexException(AbandonedMutexException const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2660 };

  /// @brief Field _mutexIndex, offset: 0x8c, size: 0x4, def value: None
  int32_t ____mutexIndex;

  /// @brief Field _mutex, offset: 0x90, size: 0x8, def value: None
  ::System::Threading::Mutex* ____mutex;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Threading::AbandonedMutexException, ____mutexIndex) == 0x8c, "Offset mismatch!");

static_assert(offsetof(::System::Threading::AbandonedMutexException, ____mutex) == 0x90, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Threading::AbandonedMutexException, 0x98>, "Size mismatch!");

} // namespace System::Threading
NEED_NO_BOX(::System::Threading::AbandonedMutexException);
DEFINE_IL2CPP_ARG_TYPE(::System::Threading::AbandonedMutexException*, "System.Threading", "AbandonedMutexException");
