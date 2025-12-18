#pragma once
// IWYU pragma private; include "UnityEngine/ProBuilder/SemVer.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SemVer)
namespace System {
template <typename T> class IComparable_1;
}
namespace System {
class IComparable;
}
namespace System {
template <typename T> class IEquatable_1;
}
namespace System {
class Object;
}
// Forward declare root types
namespace UnityEngine::ProBuilder {
class SemVer;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::ProBuilder::SemVer);
// Dependencies System.Object
namespace UnityEngine::ProBuilder {
// Is value type: false
// CS Name: UnityEngine.ProBuilder.SemVer
class CORDL_TYPE SemVer : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_MajorMinorPatch)) ::UnityEngine::ProBuilder::SemVer* MajorMinorPatch;

  __declspec(property(get = get_build)) int32_t build;

  __declspec(property(get = get_date)) ::StringW date;

  /// @brief Field m_Build, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get_m_Build, put = __cordl_internal_set_m_Build)) int32_t m_Build;

  /// @brief Field m_Date, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Date, put = __cordl_internal_set_m_Date)) ::StringW m_Date;

  /// @brief Field m_Major, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_m_Major, put = __cordl_internal_set_m_Major)) int32_t m_Major;

  /// @brief Field m_Metadata, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Metadata, put = __cordl_internal_set_m_Metadata)) ::StringW m_Metadata;

  /// @brief Field m_Minor, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get_m_Minor, put = __cordl_internal_set_m_Minor)) int32_t m_Minor;

  /// @brief Field m_Patch, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_m_Patch, put = __cordl_internal_set_m_Patch)) int32_t m_Patch;

  /// @brief Field m_Type, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Type, put = __cordl_internal_set_m_Type)) ::StringW m_Type;

  __declspec(property(get = get_major)) int32_t major;

  __declspec(property(get = get_metadata)) ::StringW metadata;

  __declspec(property(get = get_minor)) int32_t minor;

  __declspec(property(get = get_patch)) int32_t patch;

  __declspec(property(get = get_type)) ::StringW type;

  /// @brief Convert operator to "::System::IComparable"
  constexpr operator ::System::IComparable*() noexcept;

  /// @brief Convert operator to "::System::IComparable_1<::UnityEngine::ProBuilder::SemVer*>"
  constexpr operator ::System::IComparable_1<::UnityEngine::ProBuilder::SemVer*>*() noexcept;

  /// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::ProBuilder::SemVer*>"
  constexpr operator ::System::IEquatable_1<::UnityEngine::ProBuilder::SemVer*>*() noexcept;

  /// @brief Method CompareTo, addr 0x65321d4, size 0x70, virtual true, abstract: false, final true
  inline int32_t CompareTo(::System::Object* obj);

  /// @brief Method CompareTo, addr 0x6532244, size 0x154, virtual true, abstract: false, final true
  inline int32_t CompareTo(::UnityEngine::ProBuilder::SemVer* version);

  /// @brief Method Equals, addr 0x6531e6c, size 0x80, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* o);

  /// @brief Method Equals, addr 0x6531eec, size 0x1a8, virtual true, abstract: false, final true
  inline bool Equals(::UnityEngine::ProBuilder::SemVer* version);

  /// @brief Method GetBuildNumber, addr 0x6532974, size 0xc0, virtual false, abstract: false, final false
  static inline int32_t GetBuildNumber(::StringW input);

  /// @brief Method GetHashCode, addr 0x6532094, size 0x140, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method IsValid, addr 0x6531e3c, size 0x30, virtual false, abstract: false, final false
  inline bool IsValid();

  static inline ::UnityEngine::ProBuilder::SemVer* New_ctor();

  static inline ::UnityEngine::ProBuilder::SemVer* New_ctor(::StringW formatted, ::StringW date);

  static inline ::UnityEngine::ProBuilder::SemVer* New_ctor(int32_t major, int32_t minor, int32_t patch, int32_t build, ::StringW type, ::StringW date, ::StringW metadata);

  /// @brief Method ToString, addr 0x6532710, size 0x264, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method ToString, addr 0x65324c0, size 0x250, virtual false, abstract: false, final false
  inline ::StringW ToString(::StringW format);

  /// @brief Method TryGetVersionInfo, addr 0x6531aa8, size 0x394, virtual false, abstract: false, final false
  static inline bool TryGetVersionInfo(::StringW input, ::ByRef<::UnityEngine::ProBuilder::SemVer*> version);

  /// @brief Method WrapNoValue, addr 0x6532398, size 0x10, virtual false, abstract: false, final false
  static inline int32_t WrapNoValue(int32_t value);

  constexpr int32_t const& __cordl_internal_get_m_Build() const;

  constexpr int32_t& __cordl_internal_get_m_Build();

  constexpr ::StringW const& __cordl_internal_get_m_Date() const;

  constexpr ::StringW& __cordl_internal_get_m_Date();

  constexpr int32_t const& __cordl_internal_get_m_Major() const;

  constexpr int32_t& __cordl_internal_get_m_Major();

  constexpr ::StringW const& __cordl_internal_get_m_Metadata() const;

  constexpr ::StringW& __cordl_internal_get_m_Metadata();

  constexpr int32_t const& __cordl_internal_get_m_Minor() const;

  constexpr int32_t& __cordl_internal_get_m_Minor();

  constexpr int32_t const& __cordl_internal_get_m_Patch() const;

  constexpr int32_t& __cordl_internal_get_m_Patch();

  constexpr ::StringW const& __cordl_internal_get_m_Type() const;

  constexpr ::StringW& __cordl_internal_get_m_Type();

  constexpr void __cordl_internal_set_m_Build(int32_t value);

  constexpr void __cordl_internal_set_m_Date(::StringW value);

  constexpr void __cordl_internal_set_m_Major(int32_t value);

  constexpr void __cordl_internal_set_m_Metadata(::StringW value);

  constexpr void __cordl_internal_set_m_Minor(int32_t value);

  constexpr void __cordl_internal_set_m_Patch(int32_t value);

  constexpr void __cordl_internal_set_m_Type(::StringW value);

  /// @brief Method .ctor, addr 0x65319f0, size 0x18, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x6531a08, size 0xa0, virtual false, abstract: false, final false
  inline void _ctor(::StringW formatted, ::StringW date);

  /// @brief Method .ctor, addr 0x65319dc, size 0x14, virtual false, abstract: false, final false
  inline void _ctor(int32_t major, int32_t minor, int32_t patch, int32_t build, ::StringW type, ::StringW date, ::StringW metadata);

  /// @brief Method get_MajorMinorPatch, addr 0x653196c, size 0x70, virtual false, abstract: false, final false
  inline ::UnityEngine::ProBuilder::SemVer* get_MajorMinorPatch();

  /// @brief Method get_build, addr 0x6531868, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_build();

  /// @brief Method get_date, addr 0x6531918, size 0x54, virtual false, abstract: false, final false
  inline ::StringW get_date();

  /// @brief Method get_major, addr 0x6531850, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_major();

  /// @brief Method get_metadata, addr 0x65318c4, size 0x54, virtual false, abstract: false, final false
  inline ::StringW get_metadata();

  /// @brief Method get_minor, addr 0x6531858, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_minor();

  /// @brief Method get_patch, addr 0x6531860, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_patch();

  /// @brief Method get_type, addr 0x6531870, size 0x54, virtual false, abstract: false, final false
  inline ::StringW get_type();

  /// @brief Convert to "::System::IComparable"
  constexpr ::System::IComparable* i___System__IComparable() noexcept;

  /// @brief Convert to "::System::IComparable_1<::UnityEngine::ProBuilder::SemVer*>"
  constexpr ::System::IComparable_1<::UnityEngine::ProBuilder::SemVer*>* i___System__IComparable_1___UnityEngine__ProBuilder__SemVer__() noexcept;

  /// @brief Convert to "::System::IEquatable_1<::UnityEngine::ProBuilder::SemVer*>"
  constexpr ::System::IEquatable_1<::UnityEngine::ProBuilder::SemVer*>* i___System__IEquatable_1___UnityEngine__ProBuilder__SemVer__() noexcept;

  /// @brief Method op_Equality, addr 0x65323a8, size 0x14, virtual false, abstract: false, final false
  static inline bool op_Equality(::UnityEngine::ProBuilder::SemVer* left, ::UnityEngine::ProBuilder::SemVer* right);

  /// @brief Method op_GreaterThan, addr 0x6532408, size 0x1c, virtual false, abstract: false, final false
  static inline bool op_GreaterThan(::UnityEngine::ProBuilder::SemVer* left, ::UnityEngine::ProBuilder::SemVer* right);

  /// @brief Method op_GreaterThanOrEqual, addr 0x653246c, size 0x54, virtual false, abstract: false, final false
  static inline bool op_GreaterThanOrEqual(::UnityEngine::ProBuilder::SemVer* left, ::UnityEngine::ProBuilder::SemVer* right);

  /// @brief Method op_Inequality, addr 0x65323bc, size 0x28, virtual false, abstract: false, final false
  static inline bool op_Inequality(::UnityEngine::ProBuilder::SemVer* left, ::UnityEngine::ProBuilder::SemVer* right);

  /// @brief Method op_LessThan, addr 0x65323e4, size 0x24, virtual false, abstract: false, final false
  static inline bool op_LessThan(::UnityEngine::ProBuilder::SemVer* left, ::UnityEngine::ProBuilder::SemVer* right);

  /// @brief Method op_LessThanOrEqual, addr 0x6532424, size 0x48, virtual false, abstract: false, final false
  static inline bool op_LessThanOrEqual(::UnityEngine::ProBuilder::SemVer* left, ::UnityEngine::ProBuilder::SemVer* right);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SemVer();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SemVer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SemVer(SemVer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SemVer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SemVer(SemVer const&) = delete;

  /// @brief Field DefaultStringFormat offset 0xffffffff size 0x8
  static constexpr ::ConstString DefaultStringFormat{ u"M.m.p-t.b" };

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16773 };

  /// @brief Field m_Major, offset: 0x10, size: 0x4, def value: None
  int32_t ___m_Major;

  /// @brief Field m_Minor, offset: 0x14, size: 0x4, def value: None
  int32_t ___m_Minor;

  /// @brief Field m_Patch, offset: 0x18, size: 0x4, def value: None
  int32_t ___m_Patch;

  /// @brief Field m_Build, offset: 0x1c, size: 0x4, def value: None
  int32_t ___m_Build;

  /// @brief Field m_Type, offset: 0x20, size: 0x8, def value: None
  ::StringW ___m_Type;

  /// @brief Field m_Metadata, offset: 0x28, size: 0x8, def value: None
  ::StringW ___m_Metadata;

  /// @brief Field m_Date, offset: 0x30, size: 0x8, def value: None
  ::StringW ___m_Date;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::ProBuilder::SemVer, ___m_Major) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::SemVer, ___m_Minor) == 0x14, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::SemVer, ___m_Patch) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::SemVer, ___m_Build) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::SemVer, ___m_Type) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::SemVer, ___m_Metadata) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::SemVer, ___m_Date) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::ProBuilder::SemVer, 0x38>, "Size mismatch!");

} // namespace UnityEngine::ProBuilder
NEED_NO_BOX(::UnityEngine::ProBuilder::SemVer);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::SemVer*, "UnityEngine.ProBuilder", "SemVer");
