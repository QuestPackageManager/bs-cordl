#pragma once
// IWYU pragma private; include "UnityEngine/Networking/UnityWebRequestAssetBundle.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(UnityWebRequestAssetBundle)
namespace UnityEngine::Networking {
class UnityWebRequest;
}
namespace UnityEngine {
struct CachedAssetBundle;
}
// Forward declare root types
namespace UnityEngine::Networking {
class UnityWebRequestAssetBundle;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Networking::UnityWebRequestAssetBundle);
// Type: UnityEngine.Networking::UnityWebRequestAssetBundle
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::Networking {
// Is value type: false
// CS Name: ::UnityEngine.Networking::UnityWebRequestAssetBundle*
class CORDL_TYPE UnityWebRequestAssetBundle : public ::System::Object {
public:
  // Declarations
  /// @brief Method GetAssetBundle, addr 0x362ad14, size 0x8, virtual false, abstract: false, final false
  static inline ::UnityEngine::Networking::UnityWebRequest* GetAssetBundle(::StringW uri);

  /// @brief Method GetAssetBundle, addr 0x362ae40, size 0xf0, virtual false, abstract: false, final false
  static inline ::UnityEngine::Networking::UnityWebRequest* GetAssetBundle(::StringW uri, ::UnityEngine::CachedAssetBundle cachedAssetBundle, uint32_t crc);

  /// @brief Method GetAssetBundle, addr 0x362ad1c, size 0xc0, virtual false, abstract: false, final false
  static inline ::UnityEngine::Networking::UnityWebRequest* GetAssetBundle(::StringW uri, uint32_t crc);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UnityWebRequestAssetBundle();

public:
  // Ctor Parameters [CppParam { name: "", ty: "UnityWebRequestAssetBundle", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UnityWebRequestAssetBundle(UnityWebRequestAssetBundle&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UnityWebRequestAssetBundle", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UnityWebRequestAssetBundle(UnityWebRequestAssetBundle const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Networking::UnityWebRequestAssetBundle, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Networking
NEED_NO_BOX(::UnityEngine::Networking::UnityWebRequestAssetBundle);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Networking::UnityWebRequestAssetBundle*, "UnityEngine.Networking", "UnityWebRequestAssetBundle");
