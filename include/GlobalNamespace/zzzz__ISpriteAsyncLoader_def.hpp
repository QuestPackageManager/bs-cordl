#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(ISpriteAsyncLoader)
namespace System::Threading::Tasks {
template <typename TResult> class Task_1;
}
namespace System::Threading {
struct CancellationToken;
}
namespace UnityEngine {
class Sprite;
}
// Forward declare root types
namespace GlobalNamespace {
class ISpriteAsyncLoader;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::ISpriteAsyncLoader);
// Type: ::ISpriteAsyncLoader
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::ISpriteAsyncLoader*
class CORDL_TYPE ISpriteAsyncLoader {
public:
  // Declarations
  /// @brief Method LoadSpriteAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Threading::Tasks::Task_1<::UnityW<::UnityEngine::Sprite>>* LoadSpriteAsync(::StringW path, ::System::Threading::CancellationToken cancellationToken);

  // Ctor Parameters [CppParam { name: "", ty: "ISpriteAsyncLoader", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ISpriteAsyncLoader(ISpriteAsyncLoader&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ISpriteAsyncLoader", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ISpriteAsyncLoader(ISpriteAsyncLoader const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ISpriteAsyncLoader);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ISpriteAsyncLoader*, "", "ISpriteAsyncLoader");
