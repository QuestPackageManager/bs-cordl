#pragma once
// IWYU pragma private; include "HoudiniEngineUnity/Test_Texture2D.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(Test_Texture2D)
namespace HoudiniEngineUnity {
template <typename T> class IEquivableWrapperClass_1;
}
namespace HoudiniEngineUnity {
template <typename T> class IEquivable_1;
}
namespace UnityEngine {
class Texture2D;
}
// Forward declare root types
namespace HoudiniEngineUnity {
class Test_Texture2D;
}
// Write type traits
MARK_REF_PTR_T(::HoudiniEngineUnity::Test_Texture2D);
// Type: HoudiniEngineUnity::Test_Texture2D
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, packing: None, specified_packing: None }
namespace HoudiniEngineUnity {
// Is value type: false
// CS Name: ::HoudiniEngineUnity::Test_Texture2D*
class CORDL_TYPE Test_Texture2D : public ::System::Object {
public:
  // Declarations
  /// @brief Field self, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_self, put = __cordl_internal_set_self)) ::UnityW<::UnityEngine::Texture2D> self;

  /// @brief Convert operator to "::HoudiniEngineUnity::IEquivableWrapperClass_1<::HoudiniEngineUnity::Test_Texture2D*>"
  constexpr operator ::HoudiniEngineUnity::IEquivableWrapperClass_1<::HoudiniEngineUnity::Test_Texture2D*>*() noexcept;

  /// @brief Convert operator to "::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::Test_Texture2D*>"
  constexpr operator ::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::Test_Texture2D*>*() noexcept;

  /// @brief Method IsEquivalentTo, addr 0x3a31aac, size 0x108, virtual true, abstract: false, final true
  inline bool IsEquivalentTo(::HoudiniEngineUnity::Test_Texture2D* other);

  /// @brief Method IsNull, addr 0x3a31a4c, size 0x60, virtual true, abstract: false, final true
  inline bool IsNull();

  static inline ::HoudiniEngineUnity::Test_Texture2D* New_ctor(::UnityEngine::Texture2D* self);

  constexpr ::UnityW<::UnityEngine::Texture2D> const& __cordl_internal_get_self() const;

  constexpr ::UnityW<::UnityEngine::Texture2D>& __cordl_internal_get_self();

  constexpr void __cordl_internal_set_self(::UnityW<::UnityEngine::Texture2D> value);

  /// @brief Method .ctor, addr 0x3a31a24, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Texture2D* self);

  /// @brief Convert to "::HoudiniEngineUnity::IEquivableWrapperClass_1<::HoudiniEngineUnity::Test_Texture2D*>"
  constexpr ::HoudiniEngineUnity::IEquivableWrapperClass_1<::HoudiniEngineUnity::Test_Texture2D*>* i___HoudiniEngineUnity__IEquivableWrapperClass_1___HoudiniEngineUnity__Test_Texture2D__() noexcept;

  /// @brief Convert to "::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::Test_Texture2D*>"
  constexpr ::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::Test_Texture2D*>* i___HoudiniEngineUnity__IEquivable_1___HoudiniEngineUnity__Test_Texture2D__() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Test_Texture2D();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Test_Texture2D", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Test_Texture2D(Test_Texture2D&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Test_Texture2D", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Test_Texture2D(Test_Texture2D const&) = delete;

  /// @brief Field self, offset: 0x10, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Texture2D> ___self;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11880 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::Test_Texture2D, 0x18>, "Size mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::Test_Texture2D, ___self) == 0x10, "Offset mismatch!");

} // namespace HoudiniEngineUnity
NEED_NO_BOX(::HoudiniEngineUnity::Test_Texture2D);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::Test_Texture2D*, "HoudiniEngineUnity", "Test_Texture2D");
