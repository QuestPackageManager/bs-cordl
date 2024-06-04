#pragma once
// IWYU pragma private; include "HoudiniEngineUnity/Test_Gradient.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(Test_Gradient)
namespace HoudiniEngineUnity {
template <typename T> class IEquivableWrapperClass_1;
}
namespace HoudiniEngineUnity {
template <typename T> class IEquivable_1;
}
namespace UnityEngine {
class Gradient;
}
// Forward declare root types
namespace HoudiniEngineUnity {
class Test_Gradient;
}
// Write type traits
MARK_REF_PTR_T(::HoudiniEngineUnity::Test_Gradient);
// Type: HoudiniEngineUnity::Test_Gradient
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace HoudiniEngineUnity {
// Is value type: false
// CS Name: ::HoudiniEngineUnity::Test_Gradient*
class CORDL_TYPE Test_Gradient : public ::System::Object {
public:
  // Declarations
  /// @brief Field self, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_self, put = __cordl_internal_set_self))::UnityEngine::Gradient* self;

  /// @brief Convert operator to "::HoudiniEngineUnity::IEquivableWrapperClass_1<::HoudiniEngineUnity::Test_Gradient*>"
  constexpr operator ::HoudiniEngineUnity::IEquivableWrapperClass_1<::HoudiniEngineUnity::Test_Gradient*>*() noexcept;

  /// @brief Convert operator to "::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::Test_Gradient*>"
  constexpr operator ::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::Test_Gradient*>*() noexcept;

  /// @brief Method IsEquivalentTo, addr 0x25e294c, size 0xf4, virtual true, abstract: false, final true
  inline bool IsEquivalentTo(::HoudiniEngineUnity::Test_Gradient* other);

  /// @brief Method IsNull, addr 0x25e293c, size 0x10, virtual true, abstract: false, final true
  inline bool IsNull();

  static inline ::HoudiniEngineUnity::Test_Gradient* New_ctor(::UnityEngine::Gradient* self);

  constexpr ::UnityEngine::Gradient*& __cordl_internal_get_self();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Gradient*> const& __cordl_internal_get_self() const;

  constexpr void __cordl_internal_set_self(::UnityEngine::Gradient* value);

  /// @brief Method .ctor, addr 0x25e2914, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Gradient* self);

  /// @brief Convert to "::HoudiniEngineUnity::IEquivableWrapperClass_1<::HoudiniEngineUnity::Test_Gradient*>"
  constexpr ::HoudiniEngineUnity::IEquivableWrapperClass_1<::HoudiniEngineUnity::Test_Gradient*>* i___HoudiniEngineUnity__IEquivableWrapperClass_1___HoudiniEngineUnity__Test_Gradient__() noexcept;

  /// @brief Convert to "::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::Test_Gradient*>"
  constexpr ::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::Test_Gradient*>* i___HoudiniEngineUnity__IEquivable_1___HoudiniEngineUnity__Test_Gradient__() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Test_Gradient();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Test_Gradient", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Test_Gradient(Test_Gradient&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Test_Gradient", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Test_Gradient(Test_Gradient const&) = delete;

  /// @brief Field self, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::Gradient* ___self;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::Test_Gradient, 0x18>, "Size mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::Test_Gradient, ___self) == 0x10, "Offset mismatch!");

} // namespace HoudiniEngineUnity
NEED_NO_BOX(::HoudiniEngineUnity::Test_Gradient);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::Test_Gradient*, "HoudiniEngineUnity", "Test_Gradient");
