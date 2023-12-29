#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SemVer)
namespace System {
class Object;
}
namespace System {
class IComparable;
}
namespace System {
template <typename T> class IEquatable_1;
}
namespace System {
template <typename T> class IComparable_1;
}
// Forward declare root types
namespace UnityEngine::ProBuilder {
class SemVer;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::ProBuilder::SemVer);
// Type: UnityEngine.ProBuilder::SemVer
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::ProBuilder {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12122))
// CS Name: ::UnityEngine.ProBuilder::SemVer*
class CORDL_TYPE SemVer : public ::System::Object {
public:
  // Declarations
  /// @brief Field m_Major, offset 0x10, size 0x4
  __declspec(property(get = __get_m_Major, put = __set_m_Major)) int32_t m_Major;

  /// @brief Field m_Minor, offset 0x14, size 0x4
  __declspec(property(get = __get_m_Minor, put = __set_m_Minor)) int32_t m_Minor;

  /// @brief Field m_Patch, offset 0x18, size 0x4
  __declspec(property(get = __get_m_Patch, put = __set_m_Patch)) int32_t m_Patch;

  /// @brief Field m_Build, offset 0x1c, size 0x4
  __declspec(property(get = __get_m_Build, put = __set_m_Build)) int32_t m_Build;

  /// @brief Field m_Type, offset 0x20, size 0x8
  __declspec(property(get = __get_m_Type, put = __set_m_Type))::StringW m_Type;

  /// @brief Field m_Metadata, offset 0x28, size 0x8
  __declspec(property(get = __get_m_Metadata, put = __set_m_Metadata))::StringW m_Metadata;

  /// @brief Field m_Date, offset 0x30, size 0x8
  __declspec(property(get = __get_m_Date, put = __set_m_Date))::StringW m_Date;

  __declspec(property(get = get_major)) int32_t major;

  __declspec(property(get = get_minor)) int32_t minor;

  __declspec(property(get = get_patch)) int32_t patch;

  __declspec(property(get = get_build)) int32_t build;

  __declspec(property(get = get_type))::StringW type;

  __declspec(property(get = get_metadata))::StringW metadata;

  __declspec(property(get = get_date))::StringW date;

  __declspec(property(get = get_MajorMinorPatch))::UnityEngine::ProBuilder::SemVer* MajorMinorPatch;

  /// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::ProBuilder::SemVer*>"
  constexpr operator ::System::IEquatable_1<::UnityEngine::ProBuilder::SemVer*>*() noexcept;

  /// @brief Convert operator to "::System::IComparable_1<::UnityEngine::ProBuilder::SemVer*>"
  constexpr operator ::System::IComparable_1<::UnityEngine::ProBuilder::SemVer*>*() noexcept;

  /// @brief Convert operator to "::System::IComparable"
  constexpr operator ::System::IComparable*() noexcept;

  constexpr int32_t& __get_m_Major();

  constexpr int32_t const& __get_m_Major() const;

  constexpr void __set_m_Major(int32_t value);

  constexpr int32_t& __get_m_Minor();

  constexpr int32_t const& __get_m_Minor() const;

  constexpr void __set_m_Minor(int32_t value);

  constexpr int32_t& __get_m_Patch();

  constexpr int32_t const& __get_m_Patch() const;

  constexpr void __set_m_Patch(int32_t value);

  constexpr int32_t& __get_m_Build();

  constexpr int32_t const& __get_m_Build() const;

  constexpr void __set_m_Build(int32_t value);

  constexpr ::StringW& __get_m_Type();

  constexpr ::StringW const& __get_m_Type() const;

  constexpr void __set_m_Type(::StringW value);

  constexpr ::StringW& __get_m_Metadata();

  constexpr ::StringW const& __get_m_Metadata() const;

  constexpr void __set_m_Metadata(::StringW value);

  constexpr ::StringW& __get_m_Date();

  constexpr ::StringW const& __get_m_Date() const;

  constexpr void __set_m_Date(::StringW value);

  /// @brief Method get_major addr 0x29eb70c size 0x8 virtual false final false
  inline int32_t get_major();

  /// @brief Method get_minor addr 0x29eb714 size 0x8 virtual false final false
  inline int32_t get_minor();

  /// @brief Method get_patch addr 0x29eb71c size 0x8 virtual false final false
  inline int32_t get_patch();

  /// @brief Method get_build addr 0x29eb724 size 0x8 virtual false final false
  inline int32_t get_build();

  /// @brief Method get_type addr 0x29eb72c size 0x50 virtual false final false
  inline ::StringW get_type();

  /// @brief Method get_metadata addr 0x29eb77c size 0x50 virtual false final false
  inline ::StringW get_metadata();

  /// @brief Method get_date addr 0x29eb7cc size 0x50 virtual false final false
  inline ::StringW get_date();

  /// @brief Method get_MajorMinorPatch addr 0x29eb81c size 0x8c virtual false final false
  inline ::UnityEngine::ProBuilder::SemVer* get_MajorMinorPatch();

  static inline ::UnityEngine::ProBuilder::SemVer* New_ctor();

  /// @brief Method .ctor addr 0x29eb914 size 0x34 virtual false final false
  inline void _ctor();

  static inline ::UnityEngine::ProBuilder::SemVer* New_ctor(::StringW formatted, ::StringW date);

  /// @brief Method .ctor addr 0x29eb948 size 0xa8 virtual false final false
  inline void _ctor(::StringW formatted, ::StringW date);

  static inline ::UnityEngine::ProBuilder::SemVer* New_ctor(int32_t major, int32_t minor, int32_t patch, int32_t build, ::StringW type, ::StringW date, ::StringW metadata);

  /// @brief Method .ctor addr 0x29eb8a8 size 0x6c virtual false final false
  inline void _ctor(int32_t major, int32_t minor, int32_t patch, int32_t build, ::StringW type, ::StringW date, ::StringW metadata);

  /// @brief Method IsValid addr 0x29ebdd4 size 0x30 virtual false final false
  inline bool IsValid();

  /// @brief Method Equals addr 0x29ebe04 size 0x70 virtual true final false
  inline bool Equals(::System::Object* o);

  /// @brief Method GetHashCode addr 0x29ec078 size 0x1cc virtual true final false
  inline int32_t GetHashCode();

  /// @brief Method Equals addr 0x29ebe74 size 0x204 virtual true final true
  inline bool Equals(::UnityEngine::ProBuilder::SemVer* version);

  /// @brief Method CompareTo addr 0x29ec244 size 0x64 virtual true final true
  inline int32_t CompareTo(::System::Object* obj);

  /// @brief Method WrapNoValue addr 0x29ec454 size 0x10 virtual false final false
  static inline int32_t WrapNoValue(int32_t value);

  /// @brief Method CompareTo addr 0x29ec2a8 size 0x1ac virtual true final true
  inline int32_t CompareTo(::UnityEngine::ProBuilder::SemVer* version);

  /// @brief Method op_Equality addr 0x29ec464 size 0x14 virtual false final false
  static inline bool op_Equality(::UnityEngine::ProBuilder::SemVer* left, ::UnityEngine::ProBuilder::SemVer* right);

  /// @brief Method op_Inequality addr 0x29ec478 size 0x28 virtual false final false
  static inline bool op_Inequality(::UnityEngine::ProBuilder::SemVer* left, ::UnityEngine::ProBuilder::SemVer* right);

  /// @brief Method op_LessThan addr 0x29ec4a0 size 0x24 virtual false final false
  static inline bool op_LessThan(::UnityEngine::ProBuilder::SemVer* left, ::UnityEngine::ProBuilder::SemVer* right);

  /// @brief Method op_GreaterThan addr 0x29ec4c4 size 0x1c virtual false final false
  static inline bool op_GreaterThan(::UnityEngine::ProBuilder::SemVer* left, ::UnityEngine::ProBuilder::SemVer* right);

  /// @brief Method op_LessThanOrEqual addr 0x29ec4e0 size 0x40 virtual false final false
  static inline bool op_LessThanOrEqual(::UnityEngine::ProBuilder::SemVer* left, ::UnityEngine::ProBuilder::SemVer* right);

  /// @brief Method op_GreaterThanOrEqual addr 0x29ec520 size 0x54 virtual false final false
  static inline bool op_GreaterThanOrEqual(::UnityEngine::ProBuilder::SemVer* left, ::UnityEngine::ProBuilder::SemVer* right);

  /// @brief Method ToString addr 0x29ec574 size 0x210 virtual false final false
  inline ::StringW ToString(::StringW format);

  /// @brief Method ToString addr 0x29ec784 size 0x230 virtual true final false
  inline ::StringW ToString();

  /// @brief Method TryGetVersionInfo addr 0x29eb9f0 size 0x3e4 virtual false final false
  static inline bool TryGetVersionInfo(::StringW input, ByRef<::UnityEngine::ProBuilder::SemVer*> version);

  /// @brief Method GetBuildNumber addr 0x29ec9b4 size 0xc8 virtual false final false
  static inline int32_t GetBuildNumber(::StringW input);

  // Ctor Parameters [CppParam { name: "", ty: "SemVer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SemVer(SemVer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SemVer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SemVer(SemVer const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SemVer();

public:
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

  /// @brief Field DefaultStringFormat offset 0xffffffff size 0x8
  static constexpr ::ConstString DefaultStringFormat{ u"M.m.p-t.b" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ProBuilder::SemVer, 0x38>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::SemVer, ___m_Major) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::SemVer, ___m_Minor) == 0x14, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::SemVer, ___m_Patch) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::SemVer, ___m_Build) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::SemVer, ___m_Type) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::SemVer, ___m_Metadata) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::SemVer, ___m_Date) == 0x30, "Offset mismatch!");

} // namespace UnityEngine::ProBuilder
NEED_NO_BOX(::UnityEngine::ProBuilder::SemVer);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::SemVer*, "UnityEngine.ProBuilder", "SemVer");
