#pragma once
// IWYU pragma private; include "UnityEngine/Networking/DownloadHandlerFile.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Networking/zzzz__DownloadHandler_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DownloadHandlerFile)
namespace System {
struct IntPtr;
}
namespace Unity::Collections {
template <typename T> struct NativeArray_1;
}
namespace UnityEngine::Bindings {
struct ManagedSpanWrapper;
}
// Forward declare root types
namespace UnityEngine::Networking {
class DownloadHandlerFile;
}
// Write type traits
MARK_REF_T(::UnityEngine::Networking::DownloadHandlerFile*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Networking::DownloadHandlerFile*, "UnityEngine.Networking", "DownloadHandlerFile");
// [NativeHeader("Modules/UnityWebRequest/Public/DownloadHandler/DownloadHandlerVFS.h")]
// Dependencies UnityEngine.Networking.DownloadHandler
namespace UnityEngine::Networking {
// Is value type: false
// CS Name: UnityEngine.Networking.DownloadHandlerFile
class CORDL_TYPE DownloadHandlerFile : public ::UnityEngine::Networking::DownloadHandler {
public:
  // Declarations
  /// [NativeThrows]
  /// @brief Method Create, addr 0x72c4404, size 0x144, virtual false, abstract: false, final false
  static inline ::System::IntPtr Create(/* [UnityMarshalAs((UnityEngine.Bindings.NativeType)0)] */ ::UnityEngine::Networking::DownloadHandlerFile* obj, ::StringW path, bool append);

  /// @brief Method Create_Injected, addr 0x72c4548, size 0x54, virtual false, abstract: false, final false
  static inline ::System::IntPtr Create_Injected(::UnityEngine::Networking::DownloadHandlerFile* obj, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> path, bool append);

  /// @brief Method GetData, addr 0x72c468c, size 0x4c, virtual true, abstract: false, final false
  inline ::ArrayW<uint8_t> GetData();

  /// @brief Method GetNativeData, addr 0x72c4640, size 0x4c, virtual true, abstract: false, final false
  inline ::Unity::Collections::NativeArray_1<uint8_t> GetNativeData();

  /// @brief Method GetText, addr 0x72c46d8, size 0x4c, virtual true, abstract: false, final false
  inline ::StringW GetText();

  /// @brief Method InternalCreateVFS, addr 0x72c459c, size 0xa0, virtual false, abstract: false, final false
  inline void InternalCreateVFS(::StringW path, bool append);

  static inline ::UnityEngine::Networking::DownloadHandlerFile* New_ctor(::StringW path, bool append);

  /// @brief Method .ctor, addr 0x72c463c, size 0x4, virtual false, abstract: false, final false
  inline void _ctor(::StringW path, bool append);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DownloadHandlerFile();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DownloadHandlerFile", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DownloadHandlerFile(DownloadHandlerFile&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DownloadHandlerFile", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DownloadHandlerFile(DownloadHandlerFile const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22757 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Networking::DownloadHandlerFile) == 0x18, "Size mismatch!");

} // namespace UnityEngine::Networking
