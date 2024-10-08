#pragma once
// IWYU pragma private; include "System/Threading/PlatformHelper.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PlatformHelper)
// Forward declare root types
namespace System::Threading {
class PlatformHelper;
}
// Write type traits
MARK_REF_PTR_T(::System::Threading::PlatformHelper);
// Type: System.Threading::PlatformHelper
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System::Threading {
// Is value type: false
// CS Name: ::System.Threading::PlatformHelper*
class CORDL_TYPE PlatformHelper : public ::System::Object {
public:
  // Declarations
  /// @brief Field IsSingleProcessor, offset 0xffffffff, size 0x1
  static __declspec(property(get = getStaticF_IsSingleProcessor, put = setStaticF_IsSingleProcessor)) bool IsSingleProcessor;

  /// @brief Field s_lastProcessorCountRefreshTicks, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_s_lastProcessorCountRefreshTicks, put = setStaticF_s_lastProcessorCountRefreshTicks)) int32_t s_lastProcessorCountRefreshTicks;

  /// @brief Field s_processorCount, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_s_processorCount, put = setStaticF_s_processorCount)) int32_t s_processorCount;

  static inline bool getStaticF_IsSingleProcessor();

  static inline int32_t getStaticF_s_lastProcessorCountRefreshTicks();

  static inline int32_t getStaticF_s_processorCount();

  /// @brief Method get_ProcessorCount, addr 0x3dd9cd0, size 0xec, virtual false, abstract: false, final false
  static inline int32_t get_ProcessorCount();

  static inline void setStaticF_IsSingleProcessor(bool value);

  static inline void setStaticF_s_lastProcessorCountRefreshTicks(int32_t value);

  static inline void setStaticF_s_processorCount(int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PlatformHelper();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PlatformHelper", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PlatformHelper(PlatformHelper&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PlatformHelper", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PlatformHelper(PlatformHelper const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2684 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Threading::PlatformHelper, 0x10>, "Size mismatch!");

} // namespace System::Threading
NEED_NO_BOX(::System::Threading::PlatformHelper);
DEFINE_IL2CPP_ARG_TYPE(::System::Threading::PlatformHelper*, "System.Threading", "PlatformHelper");
