#pragma once
// IWYU pragma private; include "Unity/Profiling/Memory/MemoryProfiler.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MemoryProfiler)
namespace System {
template <typename T> class Action_1;
}
namespace System {
template <typename T1, typename T2> class Action_2;
}
namespace System {
template <typename T1, typename T2, typename T3> class Action_3;
}
namespace System {
struct IntPtr;
}
namespace Unity::Profiling::Memory {
class MemorySnapshotMetadata;
}
namespace Unity::Profiling {
struct DebugScreenCapture;
}
namespace UnityEngine {
struct TextureFormat;
}
// Forward declare root types
namespace Unity::Profiling::Memory {
class MemoryProfiler;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Profiling::Memory::MemoryProfiler);
// Dependencies System.Object
namespace Unity::Profiling::Memory {
// Is value type: false
// CS Name: Unity.Profiling.Memory.MemoryProfiler
class CORDL_TYPE MemoryProfiler : public ::System::Object {
public:
  // Declarations
  /// @brief Field CreatingMetadata, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_CreatingMetadata, put = setStaticF_CreatingMetadata)) ::System::Action_1<::Unity::Profiling::Memory::MemorySnapshotMetadata*>* CreatingMetadata;

  /// @brief Field m_SaveScreenshotToDisk, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_m_SaveScreenshotToDisk,
                      put = setStaticF_m_SaveScreenshotToDisk)) ::System::Action_3<::StringW, bool, ::Unity::Profiling::DebugScreenCapture>* m_SaveScreenshotToDisk;

  /// @brief Field m_SnapshotFinished, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_m_SnapshotFinished, put = setStaticF_m_SnapshotFinished)) ::System::Action_2<::StringW, bool>* m_SnapshotFinished;

  /// @brief Method FinalizeSnapshot, addr 0x4861a14, size 0x84, virtual false, abstract: false, final false
  static inline void FinalizeSnapshot(::StringW path, bool result);

  /// @brief Method PrepareMetadata, addr 0x486169c, size 0x1fc, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> PrepareMetadata();

  /// @brief Method SaveScreenshotToDisk, addr 0x4861a98, size 0xfc, virtual false, abstract: false, final false
  static inline void SaveScreenshotToDisk(::StringW path, bool result, ::System::IntPtr pixelsPtr, int32_t pixelsCount, ::UnityEngine::TextureFormat format, int32_t width, int32_t height);

  /// @brief Method WriteIntToByteArray, addr 0x4861898, size 0x8c, virtual false, abstract: false, final false
  static inline int32_t WriteIntToByteArray(::ArrayW<uint8_t, ::Array<uint8_t>*> array, int32_t offset, int32_t value);

  /// @brief Method WriteStringToByteArray, addr 0x4861924, size 0x9c, virtual false, abstract: false, final false
  static inline int32_t WriteStringToByteArray(::ArrayW<uint8_t, ::Array<uint8_t>*> array, int32_t offset, ::StringW value);

  static inline ::System::Action_1<::Unity::Profiling::Memory::MemorySnapshotMetadata*>* getStaticF_CreatingMetadata();

  static inline ::System::Action_3<::StringW, bool, ::Unity::Profiling::DebugScreenCapture>* getStaticF_m_SaveScreenshotToDisk();

  static inline ::System::Action_2<::StringW, bool>* getStaticF_m_SnapshotFinished();

  static inline void setStaticF_CreatingMetadata(::System::Action_1<::Unity::Profiling::Memory::MemorySnapshotMetadata*>* value);

  static inline void setStaticF_m_SaveScreenshotToDisk(::System::Action_3<::StringW, bool, ::Unity::Profiling::DebugScreenCapture>* value);

  static inline void setStaticF_m_SnapshotFinished(::System::Action_2<::StringW, bool>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MemoryProfiler();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MemoryProfiler", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MemoryProfiler(MemoryProfiler&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MemoryProfiler", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MemoryProfiler(MemoryProfiler const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10580 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Profiling::Memory::MemoryProfiler, 0x10>, "Size mismatch!");

} // namespace Unity::Profiling::Memory
NEED_NO_BOX(::Unity::Profiling::Memory::MemoryProfiler);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Profiling::Memory::MemoryProfiler*, "Unity.Profiling.Memory", "MemoryProfiler");
