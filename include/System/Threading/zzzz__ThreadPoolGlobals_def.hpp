#pragma once
// IWYU pragma private; include "System/Threading/ThreadPoolGlobals.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ThreadPoolGlobals)
namespace System::Threading {
class ThreadPoolWorkQueue;
}
// Forward declare root types
namespace System::Threading {
class ThreadPoolGlobals;
}
// Write type traits
MARK_REF_PTR_T(::System::Threading::ThreadPoolGlobals);
// Type: System.Threading::ThreadPoolGlobals
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System::Threading {
// Is value type: false
// CS Name: ::System.Threading::ThreadPoolGlobals*
class CORDL_TYPE ThreadPoolGlobals : public ::System::Object {
public:
  // Declarations
  /// @brief Field enableWorkerTracking, offset 0xffffffff, size 0x1
  static __declspec(property(get = getStaticF_enableWorkerTracking, put = setStaticF_enableWorkerTracking)) bool enableWorkerTracking;

  /// @brief Field processorCount, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_processorCount, put = setStaticF_processorCount)) int32_t processorCount;

  /// @brief Field vmTpInitialized, offset 0xffffffff, size 0x1
  static __declspec(property(get = getStaticF_vmTpInitialized, put = setStaticF_vmTpInitialized)) bool vmTpInitialized;

  /// @brief Field workQueue, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_workQueue, put = setStaticF_workQueue)) ::System::Threading::ThreadPoolWorkQueue* workQueue;

  static inline bool getStaticF_enableWorkerTracking();

  static inline int32_t getStaticF_processorCount();

  static inline bool getStaticF_vmTpInitialized();

  static inline ::System::Threading::ThreadPoolWorkQueue* getStaticF_workQueue();

  static inline void setStaticF_enableWorkerTracking(bool value);

  static inline void setStaticF_processorCount(int32_t value);

  static inline void setStaticF_vmTpInitialized(bool value);

  static inline void setStaticF_workQueue(::System::Threading::ThreadPoolWorkQueue* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ThreadPoolGlobals();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ThreadPoolGlobals", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ThreadPoolGlobals(ThreadPoolGlobals&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ThreadPoolGlobals", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ThreadPoolGlobals(ThreadPoolGlobals const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2733 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Threading::ThreadPoolGlobals, 0x10>, "Size mismatch!");

} // namespace System::Threading
NEED_NO_BOX(::System::Threading::ThreadPoolGlobals);
DEFINE_IL2CPP_ARG_TYPE(::System::Threading::ThreadPoolGlobals*, "System.Threading", "ThreadPoolGlobals");
