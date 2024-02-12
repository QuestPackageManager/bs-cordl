#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(RuntimeThread)
namespace System::Threading {
class ParameterizedThreadStart;
}
namespace System::Threading {
class Thread;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Internal::Runtime::Augments {
class RuntimeThread;
}
// Write type traits
MARK_REF_PTR_T(::Internal::Runtime::Augments::RuntimeThread);
// Type: Internal.Runtime.Augments::RuntimeThread
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Internal::Runtime::Augments {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2308))
// CS Name: ::Internal.Runtime.Augments::RuntimeThread*
class CORDL_TYPE RuntimeThread : public ::System::Object {
public:
  // Declarations
  /// @brief Field thread, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_thread, put = __cordl_internal_set_thread))::System::Threading::Thread* thread;

  /// @brief Field OptimalMaxSpinWaitsPerSpinIteration, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_OptimalMaxSpinWaitsPerSpinIteration, put = setStaticF_OptimalMaxSpinWaitsPerSpinIteration)) int32_t OptimalMaxSpinWaitsPerSpinIteration;

  __declspec(property(put = set_IsBackground)) bool IsBackground;

  constexpr ::System::Threading::Thread*& __cordl_internal_get_thread();

  constexpr ::cordl_internals::to_const_pointer<::System::Threading::Thread*> const& __cordl_internal_get_thread() const;

  constexpr void __cordl_internal_set_thread(::System::Threading::Thread* value);

  static inline void setStaticF_OptimalMaxSpinWaitsPerSpinIteration(int32_t value);

  static inline int32_t getStaticF_OptimalMaxSpinWaitsPerSpinIteration();

  static inline ::Internal::Runtime::Augments::RuntimeThread* New_ctor(::System::Threading::Thread* t);

  /// @brief Method .ctor, addr 0x244c58c, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::System::Threading::Thread* t);

  /// @brief Method Create, addr 0x244c5b4, size 0xa4, virtual false, abstract: false, final false
  static inline ::Internal::Runtime::Augments::RuntimeThread* Create(::System::Threading::ParameterizedThreadStart* start, int32_t maxStackSize);

  /// @brief Method set_IsBackground, addr 0x244c658, size 0x20, virtual false, abstract: false, final false
  inline void set_IsBackground(bool value);

  /// @brief Method Start, addr 0x244c678, size 0x1c, virtual false, abstract: false, final false
  inline void Start(::System::Object* state);

  /// @brief Method Sleep, addr 0x244c694, size 0x8, virtual false, abstract: false, final false
  static inline void Sleep(int32_t millisecondsTimeout);

  /// @brief Method Yield, addr 0x244c69c, size 0x8, virtual false, abstract: false, final false
  static inline bool Yield();

  /// @brief Method SpinWait, addr 0x244c6a4, size 0x18, virtual false, abstract: false, final false
  static inline bool SpinWait(int32_t iterations);

  /// @brief Method GetCurrentProcessorId, addr 0x244c6bc, size 0x8, virtual false, abstract: false, final false
  static inline int32_t GetCurrentProcessorId();

  // Ctor Parameters [CppParam { name: "", ty: "RuntimeThread", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RuntimeThread(RuntimeThread&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RuntimeThread", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RuntimeThread(RuntimeThread const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RuntimeThread();

public:
  /// @brief Field thread, offset: 0x10, size: 0x8, def value: None
  ::System::Threading::Thread* ___thread;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Internal::Runtime::Augments::RuntimeThread, 0x18>, "Size mismatch!");

static_assert(offsetof(::Internal::Runtime::Augments::RuntimeThread, ___thread) == 0x10, "Offset mismatch!");

} // namespace Internal::Runtime::Augments
NEED_NO_BOX(::Internal::Runtime::Augments::RuntimeThread);
DEFINE_IL2CPP_ARG_TYPE(::Internal::Runtime::Augments::RuntimeThread*, "Internal.Runtime.Augments", "RuntimeThread");
