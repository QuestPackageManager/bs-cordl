#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(ProfileBlock)
namespace System::Text::RegularExpressions {
class Regex;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Zenject {
class ProfileBlock;
}
// Write type traits
MARK_REF_PTR_T(::Zenject::ProfileBlock);
// Type: Zenject::ProfileBlock
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Zenject {
// Is value type: false
// CS Name: ::Zenject::ProfileBlock*
class CORDL_TYPE ProfileBlock : public ::System::Object {
public:
  // Declarations
  /// @brief Field <ProfilePattern>k__BackingField, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__ProfilePattern_k__BackingField,
                             put = setStaticF__ProfilePattern_k__BackingField))::System::Text::RegularExpressions::Regex* _ProfilePattern_k__BackingField;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method Dispose, addr 0x302dedc, size 0x4, virtual true, abstract: false, final true
  inline void Dispose();

  static inline ::Zenject::ProfileBlock* New_ctor(::StringW sampleName);

  static inline ::Zenject::ProfileBlock* New_ctor(::StringW sampleName, bool rootBlock);

  /// @brief Method Start, addr 0x302debc, size 0x8, virtual false, abstract: false, final false
  static inline ::Zenject::ProfileBlock* Start();

  /// @brief Method Start, addr 0x302ded4, size 0x8, virtual false, abstract: false, final false
  static inline ::Zenject::ProfileBlock* Start(::StringW sampleName);

  /// @brief Method Start, addr 0x302decc, size 0x8, virtual false, abstract: false, final false
  static inline ::Zenject::ProfileBlock* Start(::StringW sampleNameFormat, ::System::Object* obj);

  /// @brief Method Start, addr 0x302dec4, size 0x8, virtual false, abstract: false, final false
  static inline ::Zenject::ProfileBlock* Start(::StringW sampleNameFormat, ::System::Object* obj1, ::System::Object* obj2);

  /// @brief Method .ctor, addr 0x302de20, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::StringW sampleName);

  /// @brief Method .ctor, addr 0x302de18, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::StringW sampleName, bool rootBlock);

  static inline ::System::Text::RegularExpressions::Regex* getStaticF__ProfilePattern_k__BackingField();

  /// @brief Method get_ProfilePattern, addr 0x302de28, size 0x48, virtual false, abstract: false, final false
  static inline ::System::Text::RegularExpressions::Regex* get_ProfilePattern();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  static inline void setStaticF__ProfilePattern_k__BackingField(::System::Text::RegularExpressions::Regex* value);

  /// @brief Method set_ProfilePattern, addr 0x302de70, size 0x4c, virtual false, abstract: false, final false
  static inline void set_ProfilePattern(::System::Text::RegularExpressions::Regex* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ProfileBlock();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ProfileBlock", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ProfileBlock(ProfileBlock&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ProfileBlock", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ProfileBlock(ProfileBlock const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::ProfileBlock, 0x10>, "Size mismatch!");

} // namespace Zenject
NEED_NO_BOX(::Zenject::ProfileBlock);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::ProfileBlock*, "Zenject", "ProfileBlock");
