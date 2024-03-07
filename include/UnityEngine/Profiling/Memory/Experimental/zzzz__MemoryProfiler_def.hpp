#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
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
namespace UnityEngine::Profiling::Experimental {
struct DebugScreenCapture;
}
namespace UnityEngine::Profiling::Memory::Experimental {
class MetaData;
}
namespace UnityEngine {
struct TextureFormat;
}
// Forward declare root types
namespace UnityEngine::Profiling::Memory::Experimental {
class MemoryProfiler;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Profiling::Memory::Experimental::MemoryProfiler);
// Type: UnityEngine.Profiling.Memory.Experimental::MemoryProfiler
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::Profiling::Memory::Experimental {
// Is value type: false
// CS Name: ::UnityEngine.Profiling.Memory.Experimental::MemoryProfiler*
class CORDL_TYPE MemoryProfiler : public ::System::Object {
public:
  // Declarations
  /// @brief Field createMetaData, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_createMetaData, put = setStaticF_createMetaData))::System::Action_1<::UnityEngine::Profiling::Memory::Experimental::MetaData*>* createMetaData;

  /// @brief Field m_SaveScreenshotToDisk, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_m_SaveScreenshotToDisk,
                             put = setStaticF_m_SaveScreenshotToDisk))::System::Action_3<::StringW, bool, ::UnityEngine::Profiling::Experimental::DebugScreenCapture>* m_SaveScreenshotToDisk;

  /// @brief Field m_SnapshotFinished, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_m_SnapshotFinished, put = setStaticF_m_SnapshotFinished))::System::Action_2<::StringW, bool>* m_SnapshotFinished;

  /// @brief Method FinalizeSnapshot, addr 0x2e35064, size 0x84, virtual false, abstract: false, final false
  static inline void FinalizeSnapshot(::StringW path, bool result);

  /// @brief Method PrepareMetadata, addr 0x2e34dcc, size 0x174, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> PrepareMetadata();

  /// @brief Method SaveScreenshotToDisk, addr 0x2e350e8, size 0xfc, virtual false, abstract: false, final false
  static inline void SaveScreenshotToDisk(::StringW path, bool result, void* pixelsPtr, int32_t pixelsCount, ::UnityEngine::TextureFormat format, int32_t width, int32_t height);

  /// @brief Method WriteIntToByteArray, addr 0x2e34f40, size 0x8c, virtual false, abstract: false, final false
  static inline int32_t WriteIntToByteArray(::ArrayW<uint8_t, ::Array<uint8_t>*> array, int32_t offset, int32_t value);

  /// @brief Method WriteStringToByteArray, addr 0x2e34fcc, size 0x98, virtual false, abstract: false, final false
  static inline int32_t WriteStringToByteArray(::ArrayW<uint8_t, ::Array<uint8_t>*> array, int32_t offset, ::StringW value);

  static inline ::System::Action_1<::UnityEngine::Profiling::Memory::Experimental::MetaData*>* getStaticF_createMetaData();

  static inline ::System::Action_3<::StringW, bool, ::UnityEngine::Profiling::Experimental::DebugScreenCapture>* getStaticF_m_SaveScreenshotToDisk();

  static inline ::System::Action_2<::StringW, bool>* getStaticF_m_SnapshotFinished();

  static inline void setStaticF_createMetaData(::System::Action_1<::UnityEngine::Profiling::Memory::Experimental::MetaData*>* value);

  static inline void setStaticF_m_SaveScreenshotToDisk(::System::Action_3<::StringW, bool, ::UnityEngine::Profiling::Experimental::DebugScreenCapture>* value);

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

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Profiling::Memory::Experimental::MemoryProfiler, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Profiling::Memory::Experimental
NEED_NO_BOX(::UnityEngine::Profiling::Memory::Experimental::MemoryProfiler);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Profiling::Memory::Experimental::MemoryProfiler*, "UnityEngine.Profiling.Memory.Experimental", "MemoryProfiler");
