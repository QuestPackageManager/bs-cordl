#pragma once
// IWYU pragma private; include "System\Threading\BarrierPostPhaseException.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Exception_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(BarrierPostPhaseException)
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System {
class Exception;
}
// Forward declare root types
namespace System::Threading {
class BarrierPostPhaseException;
}
// Write type traits
MARK_REF_T(::System::Threading::BarrierPostPhaseException*);
DEFINE_IL2CPP_CLASS(::System::Threading::BarrierPostPhaseException*, "System.Threading", "BarrierPostPhaseException");
// Dependencies System.Exception
namespace System::Threading {
// Is value type: false
// CS Name: System.Threading.BarrierPostPhaseException
class CORDL_TYPE BarrierPostPhaseException : public ::System::Exception {
public:
  // Declarations
  static inline ::System::Threading::BarrierPostPhaseException* New_ctor();

  static inline ::System::Threading::BarrierPostPhaseException* New_ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  static inline ::System::Threading::BarrierPostPhaseException* New_ctor(::System::Exception* innerException);

  static inline ::System::Threading::BarrierPostPhaseException* New_ctor(::StringW message);

  static inline ::System::Threading::BarrierPostPhaseException* New_ctor(::StringW message, ::System::Exception* innerException);

  /// @brief Method .ctor, addr 0x637b1c4, size 0xc, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x637b27c, size 0x84, virtual false, abstract: false, final false
  inline void _ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method .ctor, addr 0x637b1d8, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(::System::Exception* innerException);

  /// @brief Method .ctor, addr 0x637b1d0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::StringW message);

  /// @brief Method .ctor, addr 0x637b1e4, size 0x98, virtual false, abstract: false, final false
  inline void _ctor(::StringW message, ::System::Exception* innerException);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BarrierPostPhaseException();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BarrierPostPhaseException", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BarrierPostPhaseException(BarrierPostPhaseException&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BarrierPostPhaseException", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BarrierPostPhaseException(BarrierPostPhaseException const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11091 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Threading::BarrierPostPhaseException) == 0x90, "Size mismatch!");

} // namespace System::Threading
